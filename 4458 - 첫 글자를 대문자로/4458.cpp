#include <iostream>
#include <string>
#include <algorithm> 
#define endl '\n'
using namespace std;

int main(){
    int N;
    cin >> N;
    cin.ignore();
    for(int i = 0; i < N; i++){
        string s;
        getline(cin, s);
        if(s[0] <= 'Z') cout << s << endl; // 대문자가 들어왔을 경우  
        else{
            s[0] -= 32;
            cout << s << endl;
		    }
    } 
}
