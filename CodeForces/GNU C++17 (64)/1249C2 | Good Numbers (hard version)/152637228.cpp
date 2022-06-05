#include <bits/stdc++.h>
 
using namespace std;
 
 
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
 
    int q;
    cin >> q;
 
 
    while(q--){
        long long int n;
        cin >> n;
 
        long long int cnum = 1;
        long long int cm = 1;
 
        while(cnum < n){
            cm *= 3;
            cnum += cm;
        }
 
        while(cm >= 1){
            if(cnum - cm >= n){
                cnum -= cm;
            }
 
            cm /= 3;
        }
 
        cout << cnum << "\n";
 
    }
 
    return 0;
}