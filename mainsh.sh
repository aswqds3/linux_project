#!/bin/bash
echo "$USERNAME 님 반갑습니다!"
echo "영단어 학습 프로그램을 시작합니다."

while true; do
    echo ""
    echo "사용 가능한 명령어: show / add / quiz / check / exit"
    read -p "명령어를 입력하세요: " command

    case "$command" in
        show)
            echo "기능: 영단어 표시"
            ./main_program 0
            ;;
        add)
            echo "기능: 영단어 추가"
            ./main_program 1
            ;;
        quiz)
            echo "기능: 영단어 퀴즈"
            ./main_program 2
            ;;
        check)
            echo "기능: 학습 진도표 체크"
            ./main_program 3
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
