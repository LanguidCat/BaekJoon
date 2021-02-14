#include <bits/stdc++.h>
using namespace std;

int main(){
    string arr[7] = {"c=", "c-", "d-", "lj", "nj", "s=", "z="};
    string s; cin >> s;
    int rslt = 0;

    for (int i = 0; i < s.size(); i++){
        if (s.size() - i >= 3 && s[i] == 'd' and s[i + 1] == 'z' and s[i + 2] == '=')
            i += 2;
        else if (s.size() - i >= 2){
            for (int j = 0; j < 7; j++){
                if (s[i] == arr[j][0] && s[i + 1] == arr[j][1]){
                    i++;
                    break;
                }
            }
        }
        rslt++;
    }
    
    cout << rslt << '\n';

    return 0;
}
