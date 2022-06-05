#include<bits/stdc++.h>
using namespace std;

#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>


using namespace __gnu_pbds;

typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t;
    cin>>t;
    while(t--){	
        long long n;
        cin>>n;
        long long pows=0;
        long long temp=n;
        if(n==1){
            cout<<1<<"\n";
            continue;
        }
        if((n&(n-1))==0){
            
            while(n>1){
                n/=2;
                pows++;
            }
            long long ans2=1;
            long long ans3=1;
            for(int i=0;i<pows;i++){
                ans2 = ans2*2;
            }
            for(int i=0;i<(pows-1);i++){
                ans3 = ans3*2;
            }
            cout<<ans2-ans3<<"\n";
            continue;
        }
        temp;
        while(temp>1){
            temp/=2;
            pows++;
        }
        
        long long ans4=1;
        long long ans5=1;
        for(int i=0;i<pows;i++){
            ans4 = ans4*2;
        }
        for(int i=0;i<(pows-1);i++){
            ans5 = ans5*2;
        }
        long long ans=ans4-ans5;
        // cout<<max(n-powl(2,pows)+1,ans)<<"\n";
        long long j=pows;
        long long ans2=1;
        for(int i=0;i<j;i++){
            ans2 = ans2*2;
        }
        cout<<max(n-ans2+1,ans)<<"\n";
    }
    return 0;
}