#include <bits/stdc++.h>

using namespace std;

int check(long long n){
    int x = n % 10;
    n/=10;
    while (n!=0){
        if(x < n%10){
            return 0;
        }
        x = n%10;
        n /= 10;
    }
    return 1;
}

int main(){
    int sobotest;
    cin >> sobotest;
    while(sobotest--){
        long long N;
        cin >> N;
        if(check(N)){
            cout << "YES";
        } else {
            cout << "NO";
        }
        cout << endl;
    }
    return 0;
}