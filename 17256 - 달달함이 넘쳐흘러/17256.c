#include <stdio.h>

int main(){
	int ax, ay, az; scanf("%d %d %d", &ax, &ay, &az);
	int cx, cy, cz; scanf("%d %d %d", &cx, &cy, &cz);
	int bx, by, bz;
	bx = cx - az;
	by = cy / ay;
	bz = cz - ax;
	printf("%d %d %d", bx, by, bz);
}
