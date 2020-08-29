#include <stdio.h>
#include <algorithm>

int main(){
	int arr[3] = {};
	scanf("%d %d %d", &arr[0], &arr[1], &arr[2]);
	std::sort(arr, arr+3);
	for(int i=0; i<3; i++) printf("%d ", arr[i]);
}
