#include <stdio.h>

int main(){
    int T; scanf("%d", &T);
    for(int i=0; i<T; i++){
        double temp;
        scanf("%lf", &temp);
        temp = temp*4/5;
        printf("$%.2f \n", temp);
        }
}
