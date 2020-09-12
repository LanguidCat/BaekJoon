#include <stdio.h>

int main(void){
    int arr[6]={}, sum=0;
    for(int i=0; i<6; i++){
    	scanf("%d", &arr[i]);
	}
	for(int i=0; i<3; i++){
		if(arr[i]<arr[i+3]){
			int temp=arr[i+3]-arr[i];
			sum += temp;
		}
	}
	printf("%d", sum);
}
