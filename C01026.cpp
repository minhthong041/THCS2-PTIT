#include <bits/stdc++.h>

using namespace std;

bool nt(int n){
    if(n <= 1){
        return 0;
    }
    for (int i=2; i <= sqrt(n);i++){
        if (n%i==0){
            return 0;
        }
    }
    return 1;
}

int main(){
    int n; cin >> n;
    while(n--){
        int N; cin >> N;
        if (nt(N)){
            cout << "YES" << endl;
        } else{
            cout << "NO" << endl;
        }
    }
    return 0;
}