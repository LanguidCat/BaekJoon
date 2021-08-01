#include <stdio.h>
#include <cmath>

int main(){
	int d, h, w;
	double c, hc, wc;
	scanf("%d %d %d", &d, &h, &w);
	c = d/sqrt(h*h+w*w); // cmath 헤더의 sqrt함수는 제곱근을 반환  
	hc = h*c;
	wc = w*c;
	printf("%d %d", (int)hc, (int)wc);
}
