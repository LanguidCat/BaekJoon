#include <stdio.h>

int main(){
    int n; int r;
    scanf("%d", &n);
    for(int i = 1; i <= 9; i++){
        r = n * i;
        printf("%d * %d = %d\n", n, i, r);
    }
}
