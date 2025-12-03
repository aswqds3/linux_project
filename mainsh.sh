#!/bin/bash
echo "$USERNAME 님 반갑습니다!"
echo "영단어 학습 프로그램을 시작합니다."

while true; do
    echo ""
    echo "--사용 가능한 명령어--"
    echo "show : 영단어 표시"
    echo "add : 영단어 추가"
    echo "quiz : 영단어 퀴즈"
    echo "check : 학습 진도표 체크"
    echo "exit : 프로그램 종료"
    read -p "명령어를 입력하세요: " command

    case "$command" in
        show)
            echo "기능: 영단어 표시"
            ./show_words
            ;;
        add)
            echo "기능: 영단어 추가"
            ./common 1
            ;;
        quiz)
            echo "기능: 영단어 퀴즈"
            ./quiz
            ;;
        check)
            echo "기능: 학습 진도표 체크"
            ./learning_table
            ;;
        exit)
            echo "프로그램을 종료합니다."
            break
            ;;
        *)
            echo "알 수 없는 명령어입니다. 다시 입력해주세요."
            ;;
    esac
done
