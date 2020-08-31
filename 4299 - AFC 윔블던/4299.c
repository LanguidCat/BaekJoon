#include <stdio.h>

int main(){
	int sum, dif;
	scanf("%d %d", &sum, &dif);
	for(int i=0; i<1001; i++){
		for(int j=0; j<1001; j++){
			if(i+j == sum){
				if(i-j == dif){
					printf("%d %d", i, j);
					return 0;
				}
				else if(j-i == dif){
					printf("%d %d", j, i);
					return 0;
				}
			}
		}
	}
	printf("%d", -1);
}
