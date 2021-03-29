#include <stdio.h>

int main(){
    int A, B, C, D;
    scanf("%d %d", &A, &B);
    scanf("%d %d", &C, &D);
	
    if(A+D < B+C) printf("%d", A+D);
    else if(A+D >= B+C) printf("%d", B+C);
}
