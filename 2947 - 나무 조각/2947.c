#include <stdio.h>
// Bubble sort 알고리즘을 이용
int main(){
    int arr[5] = {}, temp;
    for(int i=0; i<5; i++) scanf("%d", &arr[i]);
    for(int i=0; i<4; i++){
    	for(int j=0; j<4; j++){
    		if(arr[j]>arr[j+1]){
    			temp = arr[j];
    			arr[j] = arr[j+1];
    			arr[j+1] = temp;
    			for(int k=0; k<5; k++) printf("%d ", arr[k]); // 각 시행마다 배열을 
    			printf("\n");
			}
		}
	}
}
