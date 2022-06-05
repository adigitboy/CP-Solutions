#include<bits/stdc++.h>
using namespace std;

long long min(long long a,long long b) {
    if(a<b){
        return a;
    }
    return b;
}


int main(){
    #ifndef ONLINE_JUDGE
     freopen("input.txt","r",stdin);
     freopen("output.txt","w",stdout);
    #endif
    long long t;
    cin>>t;
    while(t-- !=0){
        long long n,m,k;
        cin>>n>>m>>k;
        double mtx[n+1][m+1];
        for(long long i=0;i<=n;i++){
            for (long long j=0;j<=m;j++){
                if(i==0 || j==0){
                    mtx[i][j]=0;
                }
                else{
                    cin>>mtx[i][j];
                }
            }
        }
        for(long long i=0;i<=n;i++){
            double pre = 0;
            for(long long j=0;j<=m;j++){
                mtx[i][j]+=pre;
                pre = mtx[i][j];
            }
        }
        for(long long j=0;j<=m;j++){
            double pre = 0;
            for(long long i=0;i<=n;i++){
                mtx[i][j]+=pre;
                pre = mtx[i][j];
            }
        }  
        long long zz = min(n,m);
        long long ans = 0;
        for(long long len = 1;len<=zz;len++){
            for(long long i=len;i<=n;i++){
                for(long long j=len;j<=m;j++){
                    if((mtx[i][j]+mtx[i-len][j-len]-mtx[i][j-len]-mtx[i-len][j])/(len*len)>=k){
                        ans++;
                    }
                }
            }
        }
        cout<<ans<<endl;
        
    }
    return 0;
    
}