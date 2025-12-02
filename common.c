#include "common.h"

// 전역 변수 실제 할당
Word word_list[MAX_WORDS];
int total_words = 0;
char file_path[256];

void get_file_path() {
    char *env_path = getenv("WORD_FILE_PATH");
    if (env_path == NULL) strcpy(file_path, "./words.csv");
    else strcpy(file_path, env_path);
}

void load_words() {
    FILE *fp = fopen(file_path, "r");
    if (fp == NULL) return;

    char line[256];
    total_words = 0;
    while (fgets(line, sizeof(line), fp)) {
        if (total_words >= MAX_WORDS) break;
        line[strcspn(line, "\n")] = 0;
        
        char *token = strtok(line, ",");
        if (token) {
            strcpy(word_list[total_words].english, token);
            token = strtok(NULL, ",");
            if (token) {
                strcpy(word_list[total_words].korean, token);
                token = strtok(NULL, ",");
                if (token) word_list[total_words].is_memorized = atoi(token);
                else word_list[total_words].is_memorized = 0;
                total_words++;
            }
        }
    }
    fclose(fp);
}

void save_words() {
    FILE *fp = fopen(file_path, "w");
    if (fp == NULL) return;
    for (int i = 0; i < total_words; i++) {
        fprintf(fp, "%s,%s,%d\n", word_list[i].english, word_list[i].korean, word_list[i].is_memorized);
    }
    fclose(fp);
}