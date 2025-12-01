#!/bin/bash
# 영단어 학습 프로그램 셸 인터페이스

echo "$USERNAME 님 반갑습니다!"
echo "영단어 학습 프로그램을 시작합니다."

while true; do
    echo ""
    echo "사용 가능한 명령어: show / exit"
    read -p "명령어를 입력하세요: " command

    if [ "$command" = "show" ]; then
        echo "기능: 영단어 표시"
        ./main 0
    elif [ "$command" = "exit" ]; then
        echo "프로그램을 종료합니다."
        break
    else
        echo "알 수 없는 명령어입니다. 다시 입력해주세요."
    fi
done
