#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t;
    cin>>t;
    while(t--){	
        long long n,sum;
        cin>>n>>sum;
        bool flag=false;
        long long total = (n)*(n+1)/2;
        if(total-sum<=n){
            if(total-sum<=0){
                cout<<-1<<"\n";
            }
            else{
                cout<<total-sum<<"\n";
            }
        }
        else{
            cout<<-1<<"\n";
        }
        
    }
    return 0;
}