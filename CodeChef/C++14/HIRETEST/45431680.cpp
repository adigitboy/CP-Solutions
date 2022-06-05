#include<bits/stdc++.h>
using namespace std;

int main(){
    long long t;
    cin>>t;
    while(t--){	
        long long n,m,x,y;
        cin>>n>>m>>x>>y;
        char j;
        long long cf = 0;
        long long cp = 0;
        for(int i=0;i<n;i++){
            cf = 0;
            cp = 0;
            for(int i=0;i<m;i++){
                cin>>j;
                if(j=='F'){
                    cf++;
                }
                else if(j=='P'){
                    cp++;
                }
            }
            if(cf>=x){
                cout<<1;
            }
            else if(cf==x-1 && cp>=y){
                cout<<1;
            }
            else{
                cout<<0;
            }
        }
        cout<<"\n";
    }
    return 0;
}