#include <stdio.h>

// 어떻게 해도 항상 FA가 나온다 
int main(void){
    char string[102]="";
    scanf("%s", string);
    int test1, test2;
	while(1){
    	test1=(string[0]-'0')*(sizeof(string));
    	if(test1 == test2){
    		printf("FA");
    		return 0;
		}
		else test2=test1;
	}
}
