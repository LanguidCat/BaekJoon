#include <stdio.h>

int main(){
    // 계산과정에서 int형을 벗어날 수 있으므로 double로 진행 
    double A, B, C, case1, case2;
    scanf("%lf %lf %lf", &A, &B, &C);
    case1=A * B / C;
    case2=A / B * C;
    // 출력값은 반드시 int형
    if(case1 >= case2) printf("%d", (int)case1);
    else printf("%d", (int)case2);
}
