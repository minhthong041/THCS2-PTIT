#include <bits/stdc++.h>

using namespace std;

int tong(int n){
    int sum = 0;
    while(n!=0){
        sum += n%10;
        n /= 10;
    }
    return sum;
}

int main(){
    int a,b;
    cin >> a >> b;
    if (tong(b) < tong(a)){
        cout << b << " " << a;
    } else {
        cout << a << " " << b;
    }
    cout << endl;
    return 0;
}