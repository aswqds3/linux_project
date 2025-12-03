#include "common.h"

int main() {
    get_file_path();
    load_words();
    //단어 없을 때
    if (total_words == 0) {
        printf(">> 단어가 없습니다.\n");
        return 0;
    }
    printf("=== 단어 목록 ===\n");
    for(int i=0;i<total_words;i++){
        printf("%2d %s %s \n",i+1,word_list[i].english,word_list[i].korean);
    }
    return 0;
}