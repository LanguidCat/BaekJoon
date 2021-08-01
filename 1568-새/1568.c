#include <stdio.h>

int main(){
    int N, min=0; scanf("%d", &N); // 새의 마리수 N, 시간 min
    for(int i=1; N!=0; i++){ // 새가 다 날아갈 때 까지 반복
    	if(i>N) i=1; // 노래중
    	N -= i;
    	min++;
	}
	printf("%d", min); // 그래서 걸린 시간이?
}
