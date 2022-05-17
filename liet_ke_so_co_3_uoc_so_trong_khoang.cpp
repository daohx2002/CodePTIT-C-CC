#include<bits/stdc++.h>
using namespace std;
int check(long long n){
    if(n < 2) return 0;
    for(long long i=2; i<=sqrt(n); i++){
        if(n % i == 0) return 0;
    }
    return 1;
}
int main(){
    int test;
    cin >> test;
    while(test--){
        long long l, r, dem=0;
        cin >> l >> r;
        for(long long i=sqrt(l); i<=sqrt(r); i++){
            if(check(i) == 1) dem++;
        }
        cout << dem << endl;
    }
}