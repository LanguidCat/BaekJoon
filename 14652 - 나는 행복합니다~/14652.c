#include <stdio.h>

int main(){
	int N, M, K;
	scanf("%d %d %d", &N, &M, &K);
  // K를 열의 개수로 나눠 몇 번째 행인지, 나머지로 몇 번째 열인지 구한다
	printf("%d %d", K/M, K%M);
}
