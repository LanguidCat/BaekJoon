#include <stdio.h>

int main(){
	int D, H, M;
	scanf("%d %d %d", &D, &H, &M);
	H += (D-11)*24;
	M += (H-11)*60;
	M -= 11;
	if(M<0) printf("%d", -1);
	else printf("%d", M);
}
