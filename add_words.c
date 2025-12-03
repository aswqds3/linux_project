#include "common.h"

int main() {
    get_file_path();
    load_words();
    char eng[MAX_LEN],char kor[MAX_LEN];
    printf("=== 추가할 단어를 \"영어 한글\"과 같이 입력해주세요 ===\n");
    printf("=== 예시 : apple 사과 ===\n");
    scanf("%s %s", eng,kor);
    srtcpy(word_list[total_words].english, eng);
    srtcpy(word_list[total_words].korean, kor);
    word_list[total_words].is_memorized = 0;
    printf("%s : %s가 추가되었습니다. ",eng,kor);

    return 0;
}