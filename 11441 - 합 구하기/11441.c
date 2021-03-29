#include <stdio.h>

int main(){
    int N, M;
	scanf("%d", &N);
	// 부분합 알고리즘을 사용  
	int arr[N+1] = {};
	for(int i = 1; i<N+1; i++){
		int n; scanf("%d", &n);
		arr[i] = arr[i-1] + n;
	}
	scanf("%d", &M);
	for(int i = 0; i<M; i++){
		int a, b; scanf("%d %d", &a, &b);
		printf("%d \n", arr[b] - arr[a-1]);
	}
}
