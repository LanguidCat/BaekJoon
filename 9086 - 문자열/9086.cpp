#include <iostream>
#include <string>
#define endl '\n'
using namespace std;

int main(){
    int T, count = 0;
    cin >> T;
    for(int i = 0; i < T; i++){
        string s;
        cin >> s;
        int temp = s.size() - 1;
        cout << s[0] << s[temp] << endl;
    }
}
