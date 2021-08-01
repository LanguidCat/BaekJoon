#include <bits/stdc++.h>
using namespace std;

int main(){
    string inpt;
    cin >> inpt;
    string rslt = "{";   // 아스키코드상 알파벳 소문자 바로 뒤

    for (int i = 0; i < inpt.size() - 2; i++){
        for (int j = i + 1; j < inpt.size() - 1; j++){
            string tmp;

            for (int k = i; k >= 0; k--)
                tmp += inpt[k];
            for (int k = j; k > i; k--)
                tmp += inpt[k];
            for (int k = inpt.size() - 1; k > j; k--)
                tmp += inpt[k];
            
            if (rslt > tmp)
                rslt = tmp;
        }
    }

    cout << rslt << '\n';
    return 0;
}
