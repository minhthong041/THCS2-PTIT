#include <bits/stdc++.h>

using namespace std;

int main(){
    int N; cin >> N;
    int tich = 1;
    while (N!=0){
        tich*= N%10;
        N/=10;
    }
    cout << tich << endl;
    return 0;
}