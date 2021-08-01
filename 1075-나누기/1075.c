#include <stdio.h>

int main(){
	int N, F;
	scanf("%d", &N);
	scanf("%d", &F);
	// N의 가장 뒤 두 자리를 00으로 만들기  
	N /= 100;
	N *= 100;
	// N을 F로 나누어 떨어질때까지 1씩 더하기  
	while(N%F!=0){
		N++;
	}
	int result = N%100;
	if(result/10==0){
		printf("0");
		printf("%d", result);
	}
	else printf("%d", result);
}
