#include <stdio.h>

int main(){
	int N, result;
	scanf("%d", &N);
	//가로와 세로 조각을 반으로 나눠 계산  
	if(N%2==0) result = (N/2+1)*(N/2+1);
	else result = ((N-1)/2+1)*((N+1)/2+1);
	printf("%d", result);
}
