#include <stdio.h>

int main(void){
    int S, T, D, crash; scanf("%d %d %d", &S, &T, &D);
    crash=D/(S*2);
    printf("%d", T*crash);
}
