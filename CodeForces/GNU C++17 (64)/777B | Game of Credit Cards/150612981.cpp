#include<bits/stdc++.h>
using namespace std;
 
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
 
 
using namespace __gnu_pbds;
 
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long n;
    string s,m;
    cin>>n>>s>>m;
    vector<long long> sh,mo;
    
    for(int i=0;i<n;i++){
        sh.push_back(s[i]-'0');
    }
    for(int i=0;i<n;i++){
        mo.push_back(m[i]-'0');
    }
    sort(sh.begin(),sh.end());
    sort(mo.begin(),mo.end());
    long long ans1=0;
    vector<long long> temp=mo;
    for(int i=0;i<n;i++){
        long long val = sh[i];
        bool flag=false;
        for(int j=0;j<n;j++){
            if(mo[j]>=sh[i]){
                flag=true;
                mo[j]=INT_MIN;
                break;
            }
        }
        if(!flag){
            ans1++;
        }
    }
    mo=temp;
    long long ans2=0;
    for(int i=0;i<n;i++){
        long long val = sh[i];
        for(int j=0;j<n;j++){
            if(mo[j]>sh[i]){
                ans2++;
                mo[j]=INT_MIN;
                break;
            }
        }
    }
    cout<<ans1<<"\n"<<ans2<<"\n";
    return 0;
}