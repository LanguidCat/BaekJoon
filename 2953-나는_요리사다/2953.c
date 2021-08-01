#include <stdio.h>

int main(){
    int arr[5] = {}, arr1[5] = {}, N, P;
    // 순서에 맞게 점수를 배열  
	for(int i=0; i<5; i++){ 
    	int sum=0;
    	for(int j=0; j<4; j++){
    		int n; scanf("%d", &n);
    		sum += n;
		}
		arr[i] = sum;
	}
	//배열 복사 
	for(int i=0; i<5; i++) arr1[i] = arr[i];

	//Bubble Sort로 정렬  
	for(int i=0; i<4; i++){
	    for(int j=0; j<4; j++){
		int temp;
		if(arr1[j]>arr1[j+1]){
		    temp = arr1[j+1];
		    arr1[j+1] = arr1[j];
		    arr1[j] = temp;
		}
	    }
	}
	N = arr1[4]; // 가장 큰 점수 
	for(int i=0; i<5; i++){
	    if(arr[i]==N) P = i+1; // 우승자 번호 찾기  
	}
	printf("%d %d", P, N);
}
