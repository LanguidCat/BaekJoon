#include <stdio.h>

int K, I;
void tmp(int N){
    if(N == 0)
        return;
    K = I-N;
    printf("%d\n", 1+K);
    tmp(N-1);
}

int main(){
    int N; scanf("%d", &N);
    I = N;
    tmp(N);
}
