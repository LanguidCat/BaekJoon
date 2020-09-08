#include <stdio.h>

int main(void){
    int A, B, C, D, E, time=0;
    scanf("%d %d %d %d %d", &A, &B, &C, &D, &E);
    while(A<0){ // 고기가 얼어 있을때 
        A++;
        time += C;
        }
	if(A==0){ // 고기 해동 
		time += D;
	}
	while(A<B){ // 상온에서 고기 가열 
		A++;
		time += E;
	}
	printf("%d", time);
}
