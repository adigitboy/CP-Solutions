#include<bits/stdc++.h>
using namespace std;
 
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
 
 
using namespace __gnu_pbds;
 
template<class T>
 
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
 
template<class key, class value, class cmp = std::less<key>>
using ordered_map = tree<key, value, cmp, rb_tree_tag, tree_order_statistics_node_update>;
 
 
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t;
    cin>>t;
    while(t--){ 
        long long n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        long long fidx=-1;
        long long lidx=-1;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='1'){
                if(fidx==-1){
                    fidx=i;
                    lidx=i;
                }
                else{
                    lidx=i;
                }
            }
        }
        bool flag=false;
        if(lidx!=-1 && lidx!=n-1){
            if(n-lidx-1<=k){
                swap(s[lidx],s[n-1]);
                k-=(n-lidx-1);
                flag=true;
            }
        }
        if(fidx!=-1 && fidx!=0){
            if(lidx==fidx){
                if(!flag && lidx!=n-1){
                    if(fidx<=k){
                        swap(s[fidx],s[0]);
                    }
                }
            }
            else if(fidx<=k){
                swap(s[fidx],s[0]);
            }
        }
        long long sum = 0;
        for(int i=0;i<n-1;i++){
            sum = sum + (s[i]-'0')*10+(s[i+1]-'0');
        }
        cout<<sum<<"\n";
    }
    return 0;
}