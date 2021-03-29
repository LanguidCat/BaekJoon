#include <stdio.h>
int main(){
	int result=0, tmp;
	while (scanf("%d", &tmp) != EOF){
		if(tmp>0) result++;
		else continue;
	}
	printf("%d", result);
}
