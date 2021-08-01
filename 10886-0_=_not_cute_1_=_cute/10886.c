#include <stdio.h>
int main(){
	int N, cut=0, ncut=0;
	scanf("%d", &N);
	for(int i=0; i<N; i++){
		int tmp; scanf("%d", &tmp);
		if(tmp==1) cut++;
		else if(tmp==0) ncut++;
	}
	if(cut>ncut) printf("Junhee is cute!");
	else if(ncut>cut) printf("Junhee is not cute!");
}
