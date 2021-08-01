#include <stdio.h>

void tmp(int N){
    if(N == 0)
        return;
    printf("%d\n", N);
    tmp(N-1);
}

int main(){
    int N; scanf("%d", &N);
    tmp(N);
}
