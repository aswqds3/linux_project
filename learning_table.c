#include "common.h"

int main() {
    get_file_path();
    load_words();

    int memo = 0;
    for (int i = 0; i < total_words; i++) {
        if (word_list[i].is_memorized) memo++;
    }

    double rate = total_words > 0 ? (double)memo / total_words * 100.0 : 0.0;

    printf("=== 학습 진도표 ===\n");
    printf("진행률: %.1f%% (%d/%d)\n", rate, memo, total_words);
    
    printf("[");
    for(int i=0; i<20; i++) {
        if (i < (int)(rate/5)) printf("#");
        else printf(" ");
    }
    printf("]\n");

    return 0;
}