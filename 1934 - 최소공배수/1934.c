#include <stdio.h>

int gcd(int a, int b){
    return b ? gcd(b, a % b) : a;
}

int main(){
    int t; scanf("%d", &t);

    for (int i = 0; i < t; i++){
      int a, b; scanf("%d %d", &a, &b);
      int A, B;

      if (a >= b){
          A = a; B = b;
      }
      else{
          A = b; B = a;
      }

      printf("%d \n", A * B / gcd(A, B));
    }
}
