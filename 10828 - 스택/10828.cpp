#include <iostream>
#include <stack>
#include <string>
#define endl '\n'
using namespace std;

int main(){
    // 프로그램의 효율성을 위함
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int N;
	cin >> N;
	
	stack <int> stk;
	
	for(int i = 0; i < N; i++){
	    string s;
	    cin >> s;
	    
	    if(s == "push"){
	        int num;
		    cin >> num;
		    stk.push(num);
	    }
		
	    else if(s == "pop"){
		    if(stk.empty()){
		    cout << "-1" << endl;
	        }
		    else{
		        cout << stk.top() << endl;
		        stk.pop();
		    }
	    }
		
	    else if(s == "size"){
		    cout << stk.size() << endl;
	    }
		
	    else if(s == "empty"){
	        cout << stk.empty() << endl;
	    }
		
	    else if(s == "top"){
	        if(stk.empty()){
		    cout << "-1" << endl;
		}
		    else{
		        cout << stk.top() << endl;
		    }
	    }
	}
	return 0;
}
