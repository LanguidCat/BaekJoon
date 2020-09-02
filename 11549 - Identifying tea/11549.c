#include <stdio.h>

int main(){
    int T, N = 0; 
    scanf("%d", &T);
    for(int i=0; i<5; i++){
        int temp; scanf("%d", &temp);
        if(T==temp) N++;
    }
    printf("%d", N);
}
