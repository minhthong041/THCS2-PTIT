#include <bits/stdc++.h>

using namespace std;

int check_even(long long n){
    int cnt1 = 0;
    int x = n%10;
    n/=10;
    while(n!=0){
        if(x==0){
            cnt1 = cnt1;
        }else if(x%2==0){
        cnt1++;
        }
        x=n%10;
        n/=10;
    }
    if(x%2==0) cnt1++;
    return cnt1;
}

int check_odd(long long n){
    int cnt2 = 0;
    int y = n%10;
    n/=10;
    while (n!=0){
        if(y%2!=0){
        cnt2++;
        }
        y=n%10;
        n/=10;
    }
    if(y%2!=0) cnt2++;
    return cnt2;
}

int main(){
    int sobotest;
    cin >> sobotest;
    while(sobotest--){
        long long N; cin >> N;
        if(N%2!=0 && check_odd(N)>check_even(N)){
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}