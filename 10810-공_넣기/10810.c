#include <stdio.h>
int main(){
	int N, M;
	scanf("%d %d", &N, &M);
	int basket[N] = {};
	for(int x=0; x<M; x++){
		int i, j, k; scanf("%d %d %d", &i, &j, &k); //i부터 j까지 k번공 
		for(int y=i-1; y<j; y++){
			basket[y] = k;
		}
	}
	for(int i=0; i<N; i++) printf("%d ", basket[i]);
}
