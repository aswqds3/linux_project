#include "common.h"

int main() {
    get_file_path();
    load_words();
    //단어 없을 때
    if (total_words == 0) {
        printf(">> 단어가 없습니다.\n");
        return 0;
    }
    
    srand(time(NULL));
    int count = 5; 
    if (total_words < 5) count = total_words;
    int score = 0;

    printf("=== 랜덤 퀴즈 (%d문제) ===\n", count);
    // 5문제 랜덤 출제
    for (int i = 0; i < count; i++) {
        int idx = rand() % total_words;
        char answer[MAX_LEN];

        printf("Q%d. %s : ", i+1, word_list[idx].korean);
        scanf("%s", answer);
        // 맞았을 때
        if (strcmp(answer, word_list[idx].english) == 0) {
            printf(" -> 정답!\n");
            score++;
            word_list[idx].is_memorized = 1;
            // 틀렸을 때
        } else {
            printf(" -> 땡! 정답: %s \n", word_list[idx].english);
        }
    }
    // 결과 출력
    printf(">> 결과: %d / %d 점\n", score, count);
    save_words();

    return 0;
}