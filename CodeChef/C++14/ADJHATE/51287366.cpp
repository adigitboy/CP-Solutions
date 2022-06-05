#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t;
    cin>>t;
    while(t--){	
        long long n;
        cin>>n;
        vector<long long> eve;
        vector<long long> odd;
        for(int i=0;i<n;i++){
            long long u;
            cin>>u;
            if(u%2==0){
                eve.push_back(u);
            }
            else{
                odd.push_back(u);
            }
        }
        if(eve.size()==0 || odd.size()==0){
            cout<<-1<<"\n";
        }
        else{
            for(auto it : eve){
                cout<<it<<" ";
            }
            for(auto it : odd){
                cout<<it<<" ";
            }
        }
        cout<<"\n";
    }
    return 0;
}