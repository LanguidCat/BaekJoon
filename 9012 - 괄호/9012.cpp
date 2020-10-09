#include <iostream>
#include <stack>
#include <string>
#define endl '\n'
using namespace std;

int main(){
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	int N;
	cin >> N;
	
	for(int i = 0; i < N; i++){
		string s;
		cin >> s;
		stack <int> stk;
		bool isgood = true;
		
		for(int j = 0; j < s.size(); j++){
			if(s[j] == '('){
				stk.push(1);
			}
			else if(s[j] == ')'){
				if(stk.empty()){
					isgood = false;
				}
				else{
					stk.pop();
				}
			}
		}
		if(!stk.empty() || isgood == false){
			cout << "NO" << endl;
		}
		else{
			cout << "YES" << endl;
		}
	}
}
