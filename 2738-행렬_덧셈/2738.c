#include <stdio.h>
int main(){
	int N, M; scanf("%d %d", &N, &M);
	int arr[N][M] = {};
	// 행렬 만들고 더하기   

	for(int i=0; i<N; i++){ // 행  
		for(int j=0; j<M; j++){ // 열  
			scanf("%d", &arr[i][j]);
		}
	}
	for(int i=0; i<N; i++){
		for(int j=0; j<M; j++){
			int n; scanf("%d", &n);
			arr[i][j] += n;
		}
	}
	// 행렬 출력하기 
	for(int i=0; i<N; i++){
		for(int j=0; j<M; j++){
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}
