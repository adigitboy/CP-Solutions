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
        long long a,b,x;
        cin>>a>>b>>x;
        if(a==x || b==x){
            cout<<"YES\n";
            continue;
        }
        else if(max(a,b)<x){
            cout<<"NO\n";
            continue;
        }
        long long maxi = max(a,b);
        long long mini = min(a,b);
        a=maxi;
        b=mini;
        long long cnt=300;
        bool flag = false;
        while(min(a,b)>0){
            if(a>x && (a-x)%b==0){
                
                flag=true;
                break;
            }
            else{
                long long temp = b;
                b = a-b*(a/b);
                a = temp;
            }
        }
        if(flag){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
    return 0;
}