/*
예제 입력 1 
5
예제 출력 1 
*****
****
***
**
*
*/
#include <stdio.h>
//재귀함수로 풀어보기
void tmp(int N){
    if(N == 0)
        return;
    for(int i = 0; i < N; i++){
        printf("*");
    }
    printf("\n");
    tmp(N-1);
}
int main(){
    int N; scanf("%d", &N);
    tmp(N);
}
