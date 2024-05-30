#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll gcd(ll a, ll b){
    if((a==0)||(b==0)) return a + b;
    while(a!=b){
        if(a>b){
            a = a - b;
        } else {
            b = b -a;
        }
    }
    return b;
}

ll lcm(ll a, ll b){
    ll c = a/gcd(a,b)*b;
    return c;
}

int main(){
    int x,y;
    cin >> x >> y;
    cout << gcd(x,y) << endl;
    cout << lcm(x,y) << endl;
    return 0;
}