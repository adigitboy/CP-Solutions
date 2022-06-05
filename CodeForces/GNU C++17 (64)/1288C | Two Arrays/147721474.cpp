#include<iostream>
using namespace std;
 
int main(){
    long long int m1 = 1000000007;
    long long int n , m; cin>>n>>m;
    long long int dpa[m][n + 1] , dpb[m][n + 1];
    for(int i = 1 ; i <= n ; i++){
        dpb[0][i] = 1;
        dpa[0][i] = 1;
    }
    for(int i = 1 ; i < m ; i++){
        for(int j = 1 ; j <= n ; j++){
            dpb[i][j] = 0;
            dpa[i][j] = 0;
            for(int k = j ; k <= n ; k++){
                dpb[i][j] = (dpb[i][j]%m1 + dpb[i - 1][k]%m1)%m1;
            }
            for(int k = 1 ; k <= j ; k++){
                dpa[i][j] = (dpa[i][j]%m1 + dpa[i - 1][k]%m1)%m1;
            }
        }
    }
    long long int ans = 0;
    for(int i = 1 ; i <= n ; i++){
        for(int j = 1 ; j <= i ; j++){
            ans = (ans%m1 + (dpb[m - 1][i]*dpa[m - 1][j])%m1)%m1;
        }
    }
    cout<<ans;
}