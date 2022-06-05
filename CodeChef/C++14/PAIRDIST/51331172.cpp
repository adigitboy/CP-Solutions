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
        vector<long long> v(n);
        for(int i=0;i<n;i++)cin>>v[i];
        if(n>4){
            cout<<"NO"<<endl;
            continue;
        }
        cout<<"YES"<<"\n";
        for(int i=0;i<n;i++){
            if(i%4==0)
                cout<<v[i]<<" 0\n";
            else if(i%4==1)
                cout<<"0 "<<v[i]<<endl;
            else if(i%4==2)
                cout<<-v[i]<<" 0\n";
            else
                cout<<"0 "<<-v[i]<<endl;
        }
    }
    return 0;
}