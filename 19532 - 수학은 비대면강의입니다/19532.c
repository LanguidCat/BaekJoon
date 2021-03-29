#include <stdio.h>
int main(){
    int a, b, c, d, e, f, x, y;
    scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f);
    x = (b*f - c*e)/(b*d - a*e);
    y = (a*f - c*d)/(a*e - b*d);
    printf("%d %d", x, y);
}
