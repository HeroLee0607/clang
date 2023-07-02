/*
    자료형 변환
        데이터의 타입을 변경하는 것.
*/
#include <stdio.h>

int main(void){

    double number1 = 10;
    int number2 = 1.2345;
    short number3 = 70000;

    // -32,768 ~ +32,767
    printf("number1: %f\n", number1); //10.00
    printf("number2: %f\n", number2); //0
    printf("number3: %f\n", number3); //0

    printf ("(short)3.1415: %d\n", (short)3.1415); //3
    printf ("(int)3.1415: %d\n", (int)3.1415); //3
    printf ("(double)3.1415: %f\n", (double)3.1415); // 
    printf ("(float)3.1415: %f\n", (float)3.1415); // 


    return 0;
}