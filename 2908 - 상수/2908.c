#include <stdio.h>
int main(){
    int arr[2]; scanf("%d %d", &arr[0], &arr[1]);
    for(int i=0; i<2; i++){
    	// 숫자 뒤집기 
    	int temp = arr[i], rev=0;
		while(temp>0){
			rev *= 10;
			rev += temp%10;
			temp /= 10;
		}
		arr[i] = rev;
	}
	// 검증
	if(arr[0] > arr[1]) printf("%d", arr[0]);
	else printf("%d", arr[1]);
}
