#include <stdio.h>
int main(){
	char str[101] = {}; scanf("%s", &str);
	for(int i=0; str[i]!=0; i++){
		int tmp = str[i];
		if(tmp<=90) str[i] += 32;
		else str[i] -= 32;
	}
	for(int i=0; str[i]!=0; i++){
		printf("%c", str[i]);
	}
}
