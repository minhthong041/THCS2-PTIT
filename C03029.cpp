#include <bits/stdc++.h>

using namespace std;

bool check(long long n){
    if ( n==0 ) return 0;
    int x = n%10;
    n/=10;
    while(n!=0){
        if (x%2!=0) return 0;
        x =n%10;
        n/=10;
    }
    return 1;
}

int main(){
    int sobotest; cin >> sobotest;
    while(sobotest--){
        long long N; cin >> N;
        if(N%2==0 && check(N)){
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}