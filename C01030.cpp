#include <bits/stdc++.h>

using namespace std;

void pt(int n){
    for( int i=2; i <= sqrt(n);i++){
        while(n%i==0){
            cout << i << " ";
            n/=i;
        }
    }
    if(n!=1){
        cout << n;
    }
}

int main(){
    int sobotest; cin >> sobotest;
    while(sobotest--){
        int N;
        cin >> N;
        pt(N);
        cout << endl;
    }
    return 0;
}