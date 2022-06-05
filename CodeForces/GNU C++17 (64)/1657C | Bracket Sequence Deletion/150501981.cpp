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
        string s;
        cin>>s;
        long long op = 0,cl = 0,cnt=0;
        bool flag=true;
        long long lm=-1;
        char ch=s[0];
        long long lu = 0;
        for(int i=0;i<n;i++){
            if(s[i]==')'){
                cl++;
            }
            else{
                op++;
            }
            if(cl>op){
                flag=false;
            }
            else if(op==cl && flag){
                cnt++;
                lm=i;
                if(i+1<n){
                    ch = s[i+1];
                    lu=i+1;
                }
                op=0;
                cl=0;
                continue;
            }
            if(i!=lu && s[i]==ch){
                flag=true;
                cnt++;
                lm=i;
                if(i+1<n){
                    ch = s[i+1];
                    lu=i+1;
                }
                op=0;
                cl=0;
            }
        }
        cout<<cnt<<" "<<n-lm-1<<"\n";
    }
    return 0;
}