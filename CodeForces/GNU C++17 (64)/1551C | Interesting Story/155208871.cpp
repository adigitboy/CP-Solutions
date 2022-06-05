#include<bits/stdc++.h>
using namespace std;
 
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
 
 
using namespace __gnu_pbds;
 
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;
 
long long diffChar(vector<string> &v,char ch){
    
    vector<pair<long long,string>> vp;
    for(int i=0;i<v.size();i++){
        long long cntch = 0;
        string s = v[i];
        for(int i=0;i<s.size();i++){
            if(s[i]==ch){
                cntch++;
            }
        }
        vp.push_back({2*cntch-s.size(),s});
    }
    
    sort(vp.begin(),vp.end(),greater<pair<long long,string>>());
   
    long long cntreq=0;
    long long cntnreq=0;
    long long cnt=0;
    for(int i=0;i<vp.size();i++){
        long long cntch = 0;
        string s = vp[i].second;
        for(int i=0;i<s.size();i++){
            if(s[i]==ch){
                cntch++;
            }
        }
        cntreq+=cntch;
        cntnreq+=s.size()-cntch;
        
        if(cntreq<=cntnreq){
            break;
        }
        cnt++;
    }
    return cnt;
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t;
    cin>>t;
    while(t--){ 
        long long n;
        cin>>n;
        vector<string> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        long long ans = 0;
        for(char ch='a';ch<='e';ch++){
            ans = max(ans,diffChar(v,ch));
        }
        cout<<ans<<"\n";
    }
    return 0;
}