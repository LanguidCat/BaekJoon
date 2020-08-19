#include <stdio.h>
int main(){
	int N, M, K; scanf("%d %d", &N, &M);
	int arr[N][M] = {}; // N행 M열의 int형 2차원 배열 만들기
	for(int i=0; i<N; i++){
		for(int j=0; j<M; j++){
			scanf("%d", &arr[i][j]); // 배열에 입력받기
		}
	}
	scanf("%d", &K);
	for(int i=0; i<K; i++){  
		int I, J, X, Y, sum=0; // (I, J)부터 (X, Y)까지의 합 sum
		scanf("%d %d %d %d", &I, &J, &X, &Y);
		for(int j=I-1; j<X; j++){
			for(int k=J-1; k<Y; k++){
				sum += arr[j][k];
			}
		}
		printf("%d \n", sum);
	}
}
