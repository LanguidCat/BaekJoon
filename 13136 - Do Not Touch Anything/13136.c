#include <stdio.h>

int main(){
    long long R, C, N, width, height;
    scanf("%d %d %d", &R, &C, &N);
    //가로세로로 CCTV가 얼마나 들어갈지를 계산  
    if(C%N==0) width = C/N;
    else width = C/N+1;
    if(R%N==0) height = R/N;
    else height = R/N+1;
    printf("%lld", width*height); // 최대 1,000,000*1,000,000 일수도 있으니 long long 자료형 사용 
}
