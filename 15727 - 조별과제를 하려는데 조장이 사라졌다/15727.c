#include <stdio.h>
int main(){
	int t; scanf("%d", &t);
	if(t%5==0) printf("%d", t/5);
	else printf("%d", t/5 + 1);
}
