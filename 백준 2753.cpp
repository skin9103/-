#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a); // 공백 제거
    if ((a % 4 == 0 && a % 100 != 0) || a % 400 == 0) // 윤년 조건 수정
        printf("1");
    else
        printf("0");
    return 0;
}