#include <stdio.h>
int main(){
    char str[101] = {}; scanf("%s", str);
    int idx=0;
    for(int i=0; str[i]!=0; i++){
        int tmp;
	tmp = str[i];
	idx++;
    }
    printf("%d", idx);
}
