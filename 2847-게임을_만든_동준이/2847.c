#include <stdio.h>
int main(){
	int N, result = 0, arr[101] = {};
	scanf("%d", &N);
	for(int i=0; i<N; i++){
		int tmp; scanf("%d", &tmp);
		arr[i] = tmp;
	}
	for(int i=0; i<N-1; i++){ //감소 계산하는 for문  
		while(arr[N-i-2] >= arr[N-i-1]){
		    int t = arr[N-i-2]-1;
			arr[N-i-2] = t;
			result++;
	    }
	}
	printf("%d", result);
}
