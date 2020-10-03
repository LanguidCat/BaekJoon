#include <iostream>
#include <vector>
using namespace std;

int main(){
	vector <int> v(4);
	for(int i = 0; i < 4; i++){
		cin >> v[i];
	}
	if(v[0] >= 8 && v[1] == v[2] && v[3] >= 8){
	    cout << "ignore";
	}
	else cout << "answer";
}
