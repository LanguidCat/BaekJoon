#include <stdio.h>

int main(){
	int min = 0;
	for(int i=0; i<4; i++){
		int temp = 0;
		scanf("%d", &temp);
		min += temp;
	}
    printf("%d \n", min/60); // 분 출력 
    printf("%d", min%60); // 초 출력 
}
