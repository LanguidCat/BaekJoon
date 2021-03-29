#include <stdio.h>

int main(){
	//arr[0] : 민국이 arr[1] : 만세 
	int arr[2] = {};
	for(int i=0; i<2; i++){
		for(int j=0; j<4; j++){
			int temp;
			scanf("%d", &temp);
			arr[i] += temp;
		}
	}
	if(arr[0]>arr[1]) printf("%d", arr[0]);
	else if(arr[1]>arr[0]) printf("%d", arr[1]);
	else printf("%d", arr[0]);
}
