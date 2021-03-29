#include <stdio.h>

int main(){
    int M, D;
    scanf("%d %d", &M, &D);
    if(M<2) printf("Before");
    else if(M==2 && D<18) printf("Before");
    else if(M==2 && D==18) printf("Special");
    else printf("After");
}
