#include <stdio.h>

int main(){
    int N; scanf("%d", &N);
    
    int arr[201] = {}; // arr[99];
    
    
    for(int i = 0; i < N; i++){
        int tmp; scanf("%d", &tmp);
        arr[tmp+100]++;
    }
    int v; scanf("%d", &v);
    
    
    printf("%d", arr[v+100]);
}
