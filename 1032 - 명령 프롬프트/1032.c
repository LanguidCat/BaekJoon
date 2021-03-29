#include <stdio.h>

int main(){
	int N; scanf("%d", &N);
	// 첫 번째 파일 이름 입력  
	char arr[51] = {}; scanf("%s", arr);
	// 두 번째부터 패턴 검증  
	for(int i=0; i<N-1; i++){
		char temp[51] = {}; scanf("%s", temp);
		for(int j=0; arr[j]!='\0'; j++){
			if(arr[j]==temp[j]){
				continue;
			}
			else arr[j] = '?';
		}
	}
	//패턴 출력 
	printf("%s", arr);
}
