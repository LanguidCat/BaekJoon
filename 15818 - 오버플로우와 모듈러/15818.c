#include <stdio.h>
int main(){
	long long N, M, Mul=1;
	scanf("%d %d", &N, &M);
	int arr[N] = {};
	for(int i=0; i<N; i++){
		int tmp; scanf("%d", &tmp);
		arr[i] = tmp % M;
	}
	for(int i=0; i<N; i++){
		Mul = ((Mul%M)*arr[i]) % M;
	}
	printf("%lld", Mul);
}
