/*
파일명 : day02-02-variable-type.c

c언어 기본 자료형 종류
    - 문자
        char        1바이트 -128 ~ +127
    - 정수
        short       2바이트 -32,768 ~ +32,767
        int         4바이트 -2,147,483,648 ~ +2,147,483,647 //싸이조회수 21억
        long        4바이트 -2,147,483,648 ~ +2,147,483,647
        long long   8바이트 -9,223,372,036,775,808 ~ +9,223,372,036,775,808
    - 실수
        float       4바이트 ±3.4x10^37 ~ ±3.4x10^38  // ㄷ+한자 
        double      8바이트 ±1.7x10 ^-307 ~ ±1.7x10^+308
        long double 8바이트 이상 double 이상의 표현범위 
*/
#include <stdio.h>
    int main(void){

        // 정의 되어 있지 않은 값을 처리할 떄 컴파일러는
        // 가장 빠르고 정확하게 표현할 수 있는 자료형을 선택 처리.
        printf("size(100): %d\n", sizeof(100)); //4바이트
        printf("size(3.14): %d\n", sizeof(3.14)); //8바이트

        char ch1 = 66, ch2 = 'B';
        short sh1 = 67;
        int in1 = 68;

        printf("%c\n", ch1); //B    %C:아스키 65=='A'
        printf("%c\n", ch2); //B
        printf("%c\n", sh1); //C
        printf("%c\n", in1); //D

        return 0;
    }
