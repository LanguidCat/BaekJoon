#include <stdio.h>

int main(){
	int h, m, c, mc;
	scanf("%d %d", &h, &m); // 현재 시간  
	scanf("%d", &c); // 요리 시간 
	mc = m+c; // 현재 분 + 요리 분   
	if(mc>=60){
		for(int i = 0; mc>=60; i++){
			h++;
			mc -= 60;
			if(h==24) h = 0;
		}
	}
	printf("%d %d", h, mc);
}
