#include <stdio.h>
int main(){
    int N, K, idx=0; scanf("%d %d", &N, &K);
    int arr[N] = {};
    for(int i=0; i<N; i++){ //N의 약수를 구해서 arr에 추가  
	if(N%(i+1)==0){  
		arr[idx] = i+1;
		idx++; ///arr의 요소의 개수
	}
	else continue;
    }
    if(K>idx) printf("%d", 0); // 약수가 없을경우 0 출력
    else printf("%d", arr[K-1]); //K번째로 작은 수요소  출력
}
