#include <bits/stdc++.h>

using namespace std;

int main(){
    int sobotest; cin >> sobotest;
    while(sobotest--){
        int N; cin >> N;
        int a[N];
        for(int i=0;i<N;i++){
            cin >> a[i];
        }
        for(int i=0;i<N;i++){
            if (a[i] % 2 ==0){
                cout << a[i] << " ";
            }
        }
        cout << endl;
    }
    return 0;
}