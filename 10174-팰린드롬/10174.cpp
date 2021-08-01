#include <iostream>
#include <string>
#include <algorithm> 
#define endl '\n'
using namespace std;

int main(){
    int n;
    cin >> n;
    cin.ignore();
    for(int i = 0; i < n; i++){
        string s, revs;
        getline(cin, s);
	for(int j = 0; j < s.size(); j++){
            if(s[j] <= 'Z') s[j] += 32; // 대문자를 소문자로 고친다 
	}
	revs = s;
	reverse(revs.begin(), revs.end());
	if(s == revs) cout << "Yes" << endl;
	else cout << "No" << endl;
    } 
}
