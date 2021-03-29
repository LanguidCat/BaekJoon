#include <iostream>
#include <string>
#include <algorithm> 
#define endl '\n'
using namespace std;

int main(){
    while(1){
    	string s;
    	getline(cin, s); // 공백을 포함하여 입력받기  
    	if(s == "END") break;
    	reverse(s.begin(), s.end()); // 문자열을 뒤집기  
    	cout << s << endl;
	}
}
