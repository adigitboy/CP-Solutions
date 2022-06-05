#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,m,flag=1,count=0,temp;
        cin>>n>>m;
        map<long long,long long> m1;
        vector<long long> v;
        for(long long i=0;i<n;i++){
            cin>>temp;
            m1[temp]++;
            v.push_back(temp);
        }
        for(long long i=0;i<m;i++){
            cin>>temp;
            m1[temp] = 0;
            v.push_back(temp);
        }
        sort(v.begin(),v.end());
        for(auto i:v){
            if(m1[i]!=flag){
                if(flag==1){
                    flag = 0;
                }
                else
                {
                    flag = 1;
                }
                count++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}