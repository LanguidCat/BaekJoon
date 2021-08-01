#include <stdio.h>

int main(){
    int A, B, C, D, P, X, Y;
    scanf("%d %d %d %d %d", &A, &B, &C, &D, &P);
    X = P*A;
    if(P<=C) Y = B;
    else{
    Y = (P-C)*D + B;
    }
    if(X<Y) printf("%d", X);
    else if(Y<X) printf("%d", Y);
}
