#include <stdio.h>

int main(){
    long long N, M, result; scanf("%lld %lld", &N, &M);
    if(N-M < 0) result = -(N-M);
    else result = N-M;
    printf("%lld", result);
}
