#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin >> test;
    while(test--){
        int n;
        cin >> n;
        int a[n];
        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        // sort(a, a+n);
        int min=2001;
        for(int i=0; i<n-1; i++){
            for(int j=i+1; j<n; j++){
                if(abs(a[j] - a[i]) <= min){
                    min = abs(a[j] - a[i]);
                }
            }
        }
        cout << min << endl;
    }
}