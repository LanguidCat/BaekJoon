#include <iostream>
#include <algorithm>
#include <vector>
#define endl '\n'
using namespace std;

int main(){
    vector<int> v;
    int N;
    cin >> N;
    for(int i = 0; i < N; i++){
    	int temp;
    	cin >> temp;
    	v.push_back(temp);
    }
    sort(v.begin(), v.end());
    reverse(v.begin(), v.end());
    for(int i = 0; i < N; i++){
        cout << v[i] << endl;
    }
}
