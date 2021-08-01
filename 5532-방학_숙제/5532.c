#include <stdio.h>

int main(){
	int L, A, B, C, D, day=0;
	scanf("%d %d %d %d %d", &L, &A, &B, &C, &D);
	while(A>0 || B>0){
		A -= C;
		B -= D;
		day++;
	}
	printf("%d", L-day); 
}
