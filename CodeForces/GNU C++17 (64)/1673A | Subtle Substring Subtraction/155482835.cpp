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
        string s;
        cin>>s;
        long long n = s.size();
        if(n==1){
            cout<<"Bob "<<(s[0]-'a')+1<<"\n";
        }
        else{
            long long total=0;
            for(int i=0;i<s.size();i++){
                total = total + ( (s[i]-'a') +1);  
            }
            if(n%2==0){
                cout<<"Alice "<<total<<"\n";
                continue;
            }
            long long st = s[0]-'a'+1;
            long long ed = s[n-1]-'a'+1;
            
            cout<<"Alice "<<total-2*min(st,ed)<<"\n";
 
        }
    }
    return 0;
}