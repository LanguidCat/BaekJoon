#include <stdio.h>
int main(){
	char str[101]={}, result[101]={};
	int idx=1; scanf("%s", &str);
	result[0] = str[0];
	for(int i=0; str[i]!=0; i++){
		if(str[i]==45){
			result[idx] = str[i+1];
			idx++;
		}
	}
	printf("%s", result);
}
