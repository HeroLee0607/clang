/*
    데이터 표현방식
        정수표현 
            컴퓨터는 2진수로 표현(bit)
            부호비트(Most Significant Bit) + 수치비트

        실수표현 (부동소수)
            지수부(e)비트 + 가수부(m) 비트
        실수표현 수식
            ±(1.m)*2^(e-127)
        부동소수점오차
            정확한 실수표현 불가능 근사치값으로 인해 생긴 오차 

        unsigned 자료형
            부호없는 데이터 
            0이상 표현
            음수포기 대신 양수 표현 범위 그만큼 커진다. 
*/
#include <stdio.h>

int main(void){
    // float: 10.000019073...
    // double: 9.999999999999999999046007 돈관련 자료형은 범위가 큰걸로 하는 거 추천
    double err_num = 0;
    for(int i =0; i<100; i++){

        err_num += 0.1;
        printf("%d번째 : %.20f\n", i, err_num);
    }

    return 0;
}