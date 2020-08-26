#include <stdio.h>

int main(){
	int L, P; scanf("%d %d", &L, &P);
	int arr[5] = {};
	scanf("%d %d %d %d %d", &arr[0], &arr[1], &arr[2], &arr[3], &arr[4]);
	for(int i=0; i<5; i++){
		printf("%d ", arr[i]-L*P);
	}
}
