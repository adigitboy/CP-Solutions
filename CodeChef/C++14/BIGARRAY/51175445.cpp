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
        long long low=1;
        long long high=n;
        while(low<=high){
            long long mid = low+(high-low)/2;
            // cout<<mid<<" ";
            if(total-mid==sum){
                cout<<mid<<"\n";
                flag=true;
                break;
            }
            else if(total-mid>sum){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        if(!flag){
            cout<<-1<<"\n";
        }
        
    }
    return 0;
}