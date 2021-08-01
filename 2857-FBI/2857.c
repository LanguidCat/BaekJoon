#include <stdio.h>
int main(){
	char fbi[4] = "FBI";
	int result[6] = {}, cout=0;
	for(int i=0; i<5; i++){
		char str[11] = {}; scanf("%s", str); //이름 입력받기  
		int idx = 0;
		for(int j=0; str[j]!=0; j++){ // 요원 검증하는 for문  
			if(str[j]==fbi[idx]) idx++;
			else idx = 0;
			
			if(idx==3){
				result[cout] = i+1;
				cout++;
			}
		}
	}
	if(cout==0) printf("HE GOT AWAY!");
	else{
		for(int i=0; result[i]!=0; i++){
		printf("%d ", result[i]);
    	}
	}
}
