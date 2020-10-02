#include <iostream>
#include <algorithm>
#include <vector>
#include <utility>
#define endl '\n'
using namespace std;

int main(){
    vector< pair<int, int> > v;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
    	int t1, t2;
    	cin >> t1 >> t2;
    	v.push_back(make_pair(t1, t2));
	}
	sort(v.begin(), v.end());
	for(int i = 0; i < n; i++){
		cout << v[i].first << ' ' << v[i].second << endl;
	}
}
