#include <stdio.h>
int main(){
	double deg; scanf("%lf", &deg);
	while(1){
		double tmp; scanf("%lf", &tmp);
		if(tmp==999) break;
		printf("%0.2f\n", tmp-deg);
		deg = tmp;
	}
}
