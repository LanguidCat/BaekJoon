#include <stdio.h>

int fac(int N){
    if(N == 0)
        return 1;
    else
        return N * fac(N-1);
}

int main(){
    int N; scanf("%d", &N);
    printf("%d", fac(N));
}
