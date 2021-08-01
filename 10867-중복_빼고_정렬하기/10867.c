#include <stdio.h>
#include <algorithm> 
int main(){
    int N; scanf("%d", &N);
    int arr[N] = {};
    for(int i=0; i<N; i++){
    	scanf("%d", &arr[i]);
	}
	// Sort
	std::sort(arr, arr+N);

	// 중복 제외하고 출력하기  
	for(int i=0; i<N; i++){
		if(arr[i]!=arr[i+1]){
			printf("%d ", arr[i]);
		}
	}
}
