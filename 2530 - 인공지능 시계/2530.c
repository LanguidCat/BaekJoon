#include <stdio.h>

int main(){
	int A, B, C, D;
	scanf("%d %d %d", &A, &B, &C);
	scanf("%d", &D);
	C += D;
	if(C>=60){
		for(int i=0; C>=60; i++){
			B++;
			C -= 60;
		}
	}
	if(B>=60){
		for(int i=0; B>=60; i++){
			A++;
			B -= 60;
		}
	}
	if(A>=24) A %= 24;
	printf("%d %d %d", A, B, C);
}
