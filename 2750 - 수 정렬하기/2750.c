#include <stdio.h>

int main(){
	int N; scanf("%d", &N);
	int arr[1001] = {};
	
	for(int i = 0; i < N; i++){
		scanf("%d", &arr[i]);
	}
	
	
	for(int i = 0; i < N-1; i++){
		for(int j = 0; j < N-1-i; j++){
			if(arr[j] > arr[j+1]){
				int tmp = arr[j+1];
				arr[j+1] = arr[j];
				arr[j] = tmp;
			}
		}
	}
	for(int i = 0; i < N; i++){
		printf("%d\n", arr[i]);
	}
}
