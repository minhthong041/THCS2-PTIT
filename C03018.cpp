#include <bits/stdc++.h>

using  namespace std;

bool nt(int n){
    if(n <= 1) return 0;
    for(int i = 2; i <= sqrt(n); i++){
        if(n%i==0) return 0;
    }
    return 1;
}

int tong(int n){
    int sum  = 0;
    while(n!=0){
        sum+=n%10;
        n/=10;
    }
    return sum;
}

bool fibo(int n){
    if (n==0 || n==1) return 1;
    long long fn1 = 1;
    long long fn2 = 0;
    long long fn;
    for (int i = 3; i <= 93; i++){
        fn=fn1+fn2;
        if (n==fn) return 1;
        fn2=fn1;
        fn1=fn;
    }
    return 0;
}

int main(){
    int a,b;
    cin >> a >> b;
    if(a>b){
        int c = a;
        a = b;
        b = c;
    }
    for (int i = a; i <= b ; i++){
        if ((nt(i)) && (fibo(tong(i)))){
            cout << i << " ";
        }
    }
    cout << endl;
    return 0;
}