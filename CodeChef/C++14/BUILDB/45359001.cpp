#include<bits/stdc++.h>
using namespace std;

int main(){
    long long t;
    cin>>t;
    while(t--){	
        long long n,r;
        cin>>n>>r;
        vector<long long> va(n,0);
        vector<long long> vb(n,0);
        for(int i=0;i<n;i++){
            cin>>va[i];
        }   
        for(int i=0;i<n;i++){
            cin>>vb[i];
        }
        long long value = 0;
        long long maxi = 0;
        for(int i=0;i<n;i++){
            value+=vb[i];
            maxi = max(value,maxi);
            if(i!=n-1){
                value-=r*(va[i+1]-va[i]);
            }  
            if(value<0){
                value = 0;
            }
        }
        cout<<maxi<<"\n";
    }
    return 0;
}