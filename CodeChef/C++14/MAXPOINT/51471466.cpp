#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t;
    cin>>t;
    while(t--){	
        long long ta,tb,tc;
        long long a,b,c;
        cin>>ta>>tb>>tc>>a>>b>>c;
        long long maxi=INT_MIN;
        for(int i=0;i<=20;i++){
            for(int j=0;j<=20;j++){
                for(int k=0;k<=20;k++){
                    long long time =ta*i+tb*j+tc*k;
                    if(time<=240){
                        maxi = max(maxi,i*a+j*b+k*c);
                    } 

                }
            }
        }
        cout<<maxi<<"\n";

    }
    return 0;
}