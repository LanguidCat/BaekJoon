#include <stdio.h>
#include <algorithm>
using namespace std;

int main(){
    int arr[4] = {}, result = 0;
    for(int i=0; i<4; i++) scanf("%d", &arr[i]);
    sort(arr, arr+4);
    result = (arr[0]+arr[3]) - (arr[1]+arr[2]);
    if(result<0) result = -result; // 만약 음수면 양수로 전환  
    printf("%d", result);
}
