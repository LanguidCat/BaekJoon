/*
예제 입력 1 
5
예제 출력 1 
*
**
***
****
*****
*/

#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            printf("%c", '*');
        }
        printf("\n"); // 한 줄이 끝났을 때 줄바꿈
    }
}
