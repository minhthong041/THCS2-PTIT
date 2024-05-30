#include <bits/stdc++.h>

using namespace std;

void check(int n){
    if(n%10==0) cout <<"YES";
    else cout << "NO";
}

int main(){
    int sobotest;
    cin >> sobotest;
    while (sobotest--){
       int N; cin >> N;
       int sum = 0;
       while(N!=0){
        sum+=N%10;
        N/=10;
       }
       check(sum);
       cout << endl;
    }
    return 0;
}