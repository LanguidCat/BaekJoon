#include <stdio.h>
int main(){
	while(true){
		int N, temp, rev_N = 0; scanf("%d", &N);
		if(N==0) return 0;
		temp = N;
		// N값 뒤집기  
		while(temp>0){
			rev_N *= 10;
			rev_N += temp%10;
			temp /= 10;
		}
		// 검증 
		if(N==rev_N) printf("yes \n");
		else printf("no \n"); 
    }
}
