#include <stdio.h>

int main(){
	int n, m, k, matA[101][101], matB[101][101], ans[101][101];
	scanf("%d %d", &n, &m);
	// 행렬 입력받기  
	for(int i = 0; i<n; i++){
		for(int j = 0; j<m; j++) scanf("%d", &matA[i][j]);
	}
	scanf("%d %d", &m, &k);
	for(int i = 0; i<m; i++){
		for(int j = 0; j<k; j++) scanf("%d", &matB[i][j]);
	}
	// 행렬 계산하기  
	for(int i=0; i<n; i++){
		for(int j=0; j<k; j++){
			int temp = 0;
			for(int l=0; l<m; l++){
				temp += matA[i][l]*matB[l][j];
			}
			ans[i][j] = temp;
		}
	}
	// 곱한 행렬 출력하기  
	for(int i=0; i<n; i++){
		for(int j=0; j<k; j++) printf("%d ", ans[i][j]);
		printf("\n");
	}
}
