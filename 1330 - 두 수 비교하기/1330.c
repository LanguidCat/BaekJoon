#include <stdio.h>

int main(){
    int a, b; scanf("%d %d", &a, &b); // 공백으로 구분한 두 정수 a, b에 배분
    
    if(a>b) printf("> \n");
    else if(a<b)printf("< \n");
    else printf("==\n");
}
