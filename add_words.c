#include "common.h"

int main() {
    get_file_path();
    load_words();
    char eng[MAX_LEN], kor[MAX_LEN];
    if (total_words >= MAX_WORDS) {
        printf("단어 목록이 가득 찼습니다.\n");
        return 1;
    }
    printf("=== 추가할 단어를 \"영어 한글\"과 같이 입력해주세요 ===\n");
    printf("=== 예시 : apple 사과 ===\n");
    scanf("%s %s",eng,kor);
    strcpy(word_list[total_words].english, eng);
    strcpy(word_list[total_words].korean, kor);
    word_list[total_words].is_memorized = 0;
    printf("%s : %s가 추가되었습니다.\n",eng,kor);

    return 0;
}