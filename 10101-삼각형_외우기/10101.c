#include <stdio.h>
int main(){
	int A, B, C; 
	scanf("%d", &A);
	scanf("%d", &B);
	scanf("%d", &C);
	if((A==B)&&(B==C)&&(C==60)){
		printf("Equilateral");
	}
	else if(((A+B+C)==180) && (A==B || B==C || A==C)){
		printf("Isosceles");
	}
	else if((A+B+C==180) && ((A!=B)&&(B!=C)&&(A!=C))){
		printf("Scalene");
	}
	else{
		printf("Error");
	}
	return 0;
}
