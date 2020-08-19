#include <stdio.h>
int main(){
	int arr[20] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
	for(int i=0; i<10; i++){
		int a, b, rev[21] = {}; scanf("%d %d", &a, &b);
		for(int j=0; j<b-a+1; j++){
			rev[j] = arr[b-1-j];
		}
		for(int j=0; j<b-a+1; j++){
			arr[a-1+j] = rev[j];
		}
	}
	for(int i=0; i<20; i++) printf("%d ", arr[i]);
}
