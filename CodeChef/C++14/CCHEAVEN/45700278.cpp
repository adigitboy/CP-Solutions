#include<bits/stdc++.h>
using namespace std;

int main(){
    long long t;
    cin>>t;
    while(t--){	
        long long n;
        cin>>n;
        string s;
        cin>>s;
        long long count1 = 0;
        long long count2 = 0;
        if(count(s.begin(),s.end(),'1')>=(count(s.begin(),s.end(),'0'))){
            cout<<"YES\n";
            continue;

        }
        bool flag = false;
        for(int i=0;i< s.size();i++){
            if(s[i]=='1'){
                count1++;
            }
            else{
                count2++;
            }
            if(count1>=count2){
                flag =true;
                break;
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