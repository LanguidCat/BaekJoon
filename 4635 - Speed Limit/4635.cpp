#include <bits/stdc++.h>
using namespace std;

int main(){
    while (1){
        int n; cin >> n;
        if (n == -1)
            break;
        int time = 0, rslt = 0;

        for (int i = 0; i < n; i++){
            int a, b; cin >> a >> b;
            rslt += a * (b - time);
            time = b;
        }
        
        printf("%d miles \n", rslt);
    }

    return 0;
}
