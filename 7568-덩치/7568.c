#include <stdio.h>

int main(){
    int N; scanf("%d", &N);
	int x[N] = {}, y[N] = {};  // x는 몸무게, y는 키  
    for(int i=0; i<N; i++){
    	scanf("%d %d", &x[i], &y[i]);
	}
	// 덩치 순서 구하기 
	for(int i=0; i<N; i++){
		int rank = 1;
		for(int j=0; j<N; j++){
			if(i==j) continue;
			else if(x[i]<x[j] && y[i]<y[j]) rank++;
		}
		printf("%d ", rank);
	}
}
