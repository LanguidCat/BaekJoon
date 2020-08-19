#include <stdio.h>
int main(){
    int sum = 0, min = 100; // 최솟값 초기 100으로 설정
        for(int i = 0; i < 7; i++){
            int tmp; scanf("%d", &tmp);
            if(tmp%2==1){ // 홀수일 경우
                sum += tmp;
		if(tmp<min){ // 최솟값 갱신
		    min = tmp;
		}
            }
        }
    if(sum==0 && min==100) printf("%d", -1);
	  else printf("%d \n%d", sum, min);
}
