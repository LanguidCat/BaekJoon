#include <stdio.h>
int main(){
	char inpt[101] = {}; scanf("%s", inpt); //입력받어 
	int idx=0, cout=0;
	while(1){
		if(inpt[idx]==0) break; //문자열 끝나면 반복문 파괴 
		printf("%c", inpt[idx]);
		idx+=1;
		cout+=1;
		if(cout==10){
			cout=0;
		    printf("\n"); //10글자 입력하면 줄바꿈 
	    }
	}
}
