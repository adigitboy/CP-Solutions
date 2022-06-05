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
        long long n,a,b;
        cin>>n>>a>>b;
        if(a>=0 && b>=0){
            long long ans1=0,ans2=0;
            for(int i=2;i*i<=n;i++){
                while(n%i==0){
                    if(i%2==0){
                        ans1++;
                    }
                    else{
                        ans2++;
                    }
                    n/=i;
                }
            }
            if(n>1){
                if(n%2){
                    ans2++;
                }
                else{
                    ans1++;
                }
                
            }
            cout<<ans1*a+ans2*b<<"\n";
        }
        else if(a>=0 && b<0){
            long long ans1=0,ans2=0;
            for(int i=2;i*i<=n;i++){
                while(n%i==0){
                    if(i%2==0){
                        ans1++;
                    }
                    else{
                        ans2++;
                    }
                    n/=i;
                }  
            }
            if(n>1){
                if(n%2){
                    ans2++;
                }
                else{
                    ans1++;
                }
                
            }
            if(ans1!=0){
                cout<<ans1*a<<"\n";
            }
            else{
                cout<<1*b<<"\n";
            }

        }
        else if(a<0 && b>=0){
            long long ans1=0,ans2=0;
            for(int i=2;i*i<=n;i++){
                while(n%i==0){
                   
                    if(i%2==0){
                        ans1++;
                    }
                    else{
                        ans2++;
                    }
                    n/=i;
                }
            }
            if(n>1){
                if(n%2){
                    ans2++;
                }
                else{
                    ans1++;
                }
                
            }
            if(ans1!=0){
                cout<<a+b*ans2<<"\n";
            }
            else{
                cout<<b*ans2<<"\n";
            }
        }
        else{
            long long ans1=0,ans2=0;
                if(n%2==0){
                    cout<<a<<"\n";
                }
                else{
                    cout<<b<<"\n";
                }
            
            
        }
    }
    return 0;
}