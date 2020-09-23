#include <stdio.h>

int main(){
    char arr[5];
    scanf("%s", arr);
    int num=0;
    for(int i=0; arr[i] != '\0'; i++) num++;
    // 자릿수를 기준으로 판단한다  
    if(num == 2){
        int temp=arr[0] - '0' + arr[1] - '0';
        printf("%d", temp);
    }
    else if(num == 3){
        if(arr[1] == '0'){
            int temp=(arr[0] - '0') * 10 + arr[2] - '0';
            printf("%d", temp);
        }
	else{
            int temp=arr[0] - '0' + (arr[1] - '0') * 10;
	    printf("%d", temp);
	}
    }
    else printf("%d", 20); 
}
