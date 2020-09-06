#include <stdio.h>
// 숫자도, 띄어쓰기도  ASCII코드에 존재한다  
int main(){
    char arr[10];
    for(int i=0; i<9; i++) scanf("%c", &arr[i]); // %c는 한 문자씩 입력받는다는 뜻 
    if(arr[0]-'0' + arr[4]-'0' == arr[8]-'0') printf("YES");
    else printf("NO");
}
