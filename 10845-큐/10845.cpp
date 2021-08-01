#include <iostream>
#include <queue>
#include <string>
#define endl '\n'

using namespace std;

int main(){
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	int N;
	cin >> N;
	queue <int> q;
	
	for(int i = 0; i < N; i++){
		string s;
		cin >> s;
		
		if(s == "push"){
			int p;
			cin >> p;
			q.push(p);
		}
		
		else if(s == "pop"){
			if(q.empty()){
				cout << "-1" << endl;
			}
			else{
				cout << q.front() << endl;
				q.pop();
			}
		}
		
		else if(s == "size"){
			cout << q.size() << endl;
		}
		
		else if(s == "empty"){
			if(q.empty()){
				cout << '1' << endl;
			}
			else{
				cout << '0' << endl;
			}
		}
		
		else if(s == "front"){
			if(q.empty()){
				cout << "-1" << endl;
			}
			else{
				cout << q.front() << endl;
			}
		}
		
		else if(s == "back"){
			if(q.empty()){
				cout << "-1" << endl;
			}
			else{
				cout << q.back() << endl;
			}
		}
	}
}
