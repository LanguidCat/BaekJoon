#include <stdio.h>
int main(){
	int T; scanf("%d", &T);
	for(int i=0; i<T; i++){
		char apb[27] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
		int result = 0;
		char S[1001] = {}; scanf("%s", S); // S 입력
		char tmp[1001] = {};
		for(int j=0; j<26; j++){ // S의 요소를 하나하나 검증 
			for(int x=0; S[x]!=0; x++){
				if(apb[j]==S[x]){
					apb[j] = -1; // 겹치는 apb요소 제외  
				}
				else continue; 
			}
		}
		for(int j=0; j<26; j++){ // 남아있는 S의 요소 합 
			if(apb[j]!=-1) result += apb[j];
			else continue;
		}
		printf("%d \n", result);
	}
}
