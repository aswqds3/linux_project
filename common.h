#ifndef COMMON_H
#define COMMON_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <unistd.h>

// 상수 정의
#define MAX_WORDS 2000
#define WORDS_PER_PAGE 5
#define MAX_LEN 100
#define BOOKMARK_FILE "bookmark.dat" 

// 단어 구조체 정의
typedef struct {
    char english[MAX_LEN];
    char korean[MAX_LEN];
    int is_memorized; // 0: 학습중, 1: 암기완료
} Word;

// 전역 변수 선언 (extern: 실제 메모리는 common.c에 있음)
extern Word word_list[MAX_WORDS];
extern int total_words;
extern char file_path[256];

// 공통 함수 선언.
void get_file_path();
void load_words();
void save_words();

#endif