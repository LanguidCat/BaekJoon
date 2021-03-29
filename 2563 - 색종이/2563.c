#include <stdio.h>
int main(){
	int sum = 0, N, white[100][100] = {}, black = 0;
	scanf("%d", &N);
	// 검정색 종이의 면적은 -1로 칠하자  
	for(int i=0; i<N; i++){
		int x, y; scanf("%d %d", &x, &y);
		for(int j=0; j<10; j++){
			for(int k=0; k<10; k++){
				white[x+j][y+k] = -1;
			}
		}
	}
	// -1의 갯수를 세자
	for(int i=0; i<100; i++){
		for(int j=0; j<100; j++){
			if(white[i][j]==-1) black++;
		}
	}
	printf("%d", black);
}
