#include <stdio.h>

int main(){
	int K, N, M, more; scanf("%d %d %d", &K, &N, &M);
	more = K*N - M;
	if(more<=0) printf("%d", 0);
	else printf("%d", more);
}
