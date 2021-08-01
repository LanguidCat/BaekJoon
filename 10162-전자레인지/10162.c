#include <stdio.h>

int main(){
    int T, A = 0, B = 0, C = 0; 
    scanf("%d", &T);
    if(T%10!=0){
        printf("%d", -1);
        return 0;
    } 
    while(T>=300){
        T -= 300;
        A++;
    }
    while(T>=60){
        T -= 60;
        B++;
    }
    while(T>=10){
    T -= 10;
    C++;
    }
    printf("%d %d %d", A, B, C);
}
