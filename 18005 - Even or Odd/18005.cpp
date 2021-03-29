#include <iostream>
#define endl '\n'

using namespace std;

int main(){
    int N;
    cin >> N;

    if (N % 2 == 1) cout << 0;
    else if (N / 2 % 2 == 1) cout << 1;
    else cout << 2;
}
