#include <bits/stdc++.h>

using namespace std;

void fibonacci(int n){
    cout << 0 << " " << 1 << " ";
    long long fn2 = 0, fn1 = 1;
    long long fn;
    for( int i = 3; i <= n; i++){
        fn = fn1+fn2;
        cout << fn << " ";
        fn2 = fn1;
        fn1 = fn;
    }
}

int main(){
    int N; cin >> N;
    fibonacci(N);
    return 0;
}