#include <stdio.h>
int main(){
	char alp[5] = {'a', 'e', 'i', 'o', 'u'};
	char inp[101] = {}; scanf("%s", inp);
	int cout=0; //모음의 숫자 
	for(int i=0; inp[i]!=0; i++){
		int tmp = inp[i];
		for(int j=0; j<5; j++){
		    if(tmp==alp[j]) cout++; //검증절차 
			else continue; 
		}
	}
	printf("%d", cout); 
}
