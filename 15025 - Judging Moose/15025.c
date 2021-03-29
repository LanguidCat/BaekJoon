#include <stdio.h>

int main(void){
    int left, right;
    scanf("%d %d", &left, &right);
    if(left == 0 && right == 0) printf("Not a moose");
    else if(left == right) printf("Even %d", left*2);
    else{
    	if(left > right) printf("Odd %d", left*2);
    	else printf("Odd %d", right*2);
	}
}
