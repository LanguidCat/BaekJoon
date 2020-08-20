#include <stdio.h>
int main(){
	char arr[5][20] = {}; // 개행문자를 같이 입력받아 오류가 생기는 것을 방지 
	for(int i=0; i<5; i++){
		scanf("%s", arr[i]);
	}
	// 가장 긴 행이 몇 열인지 구하기 
	int max = 0;
	for(int i=0; i<5; i++){
		int temp=0;
		for(int j=0; arr[i][j]!='\0'; j++){
			temp++;
		}
		if(max<temp) max = temp;
	}
	// 세로로 세기 
	for(int i=0; i<max; i++){
		for(int j=0; j<5; j++){
			if(arr[j][i]=='\0') continue;
			printf("%c", arr[j][i]);
		}
	}
}
