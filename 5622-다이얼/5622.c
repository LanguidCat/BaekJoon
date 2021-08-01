#include <stdio.h>
int main(){
    char arr[20] = {}; scanf("%s", arr);
    int min=0;
    for(int i=0; arr[i]!='\0'; i++){
    	if(arr[i]=='A' || arr[i]=='B' || arr[i]=='C') min += 3;
    	else if(arr[i]=='D' || arr[i]=='E' || arr[i]=='F') min += 4;
    	else if(arr[i]=='G' || arr[i]=='H' || arr[i]=='I') min += 5;
    	else if(arr[i]=='J' || arr[i]=='K' || arr[i]=='L') min += 6;
    	else if(arr[i]=='M' || arr[i]=='N' || arr[i]=='O') min += 7;
    	else if(arr[i]=='P' || arr[i]=='Q' || arr[i]=='R' || arr[i]=='S') min += 8;
    	else if(arr[i]=='T' || arr[i]=='U' || arr[i]=='V') min += 9;
    	else min += 10;
	}
	printf("%d", min);
}
