#include <stdio.h>
int main(){
	int arr[5] = {};
	int date;
	scanf("%d", &date);
	for(int i = 0; i<5; i++){
		scanf("%d", &arr[i]);
	}
	int num = 0;
	for(int i=0; i<5; i++){
		if(arr[i]==date){
			num++;
		}
		else{
			continue;
		}
	}
	printf("%d", num);
}
