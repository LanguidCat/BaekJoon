#include <stdio.h>
int main(){
	int sum, sub=0;
	scanf("%d", &sum);
	for(int i=0; i<9; i++){
		int tmp=0; scanf("%d", &tmp);
		sub += tmp;
	}
	printf("%d", sum-sub);
}
