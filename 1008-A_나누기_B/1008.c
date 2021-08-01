#include <stdio.h>

int main(){
    int a, b; scanf("%d %d", &a, &b); // 정수 a, b를 공백으로 구분해 입력받음  
    double A = a, B = b; // a와 b를 실수형으로 변환  
    printf("%.9f", A/B); // 오차를 e-9이하 수준으로 줄이기 위함  
}
