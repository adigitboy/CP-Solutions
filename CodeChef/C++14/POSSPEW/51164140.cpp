#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t;
    cin>>t;
    while(t--){	
        long long n,k;
    cin >> n >> k;
    long long a[n];
    set<long long> st;
    for(long long j=0;j<n;j++){
        cin >> a[j];
        if(a[j]>0){
            st.insert(j);
        }
    }
    if(st.size()==0){
        cout << "0\n";
    }
    else{
        long long v[n];
        long long val=0,totalm=0;
        for(long long j=0;j<n;j++){
            if(a[j]==0){
                auto it=st.lower_bound(j);
                if(it==st.begin() || it==st.end()){
                    long long x=*st.begin();
                    long long y=*st.rbegin();
                                   
                    x=min(abs(x-j),min(n-j+x,n-x+j));
                
                    y=min(abs(y-j),min(n-j+y,n-y+j));
                    v[j]=min(x,y);
                   
                }
                else{
                    long long x=*it;
                    it--;
                    long long y=*it;
                    v[j]=min(abs(j-x),abs(j-y));
                }
            }
            else{
                v[j]=0;
            }
            totalm=min(k,max(totalm,v[j]));
        }
        long long z=k-totalm;
        val+=(z*2*n);
        for(long long j=0;j<n;j++){
            
            if(j==0){
                if(v[j+1]<totalm)
                    val+=abs(totalm-v[j+1]);
                if(v[n-1]<totalm)
                    val+=abs(totalm-v[n-1]);
               
            }
            else if(j==n-1){
                if(v[0]<totalm)
                    val+=abs(totalm-v[0]);
                if(v[j-1]<totalm)
                    val+=abs(totalm-v[j-1]);
            }
            else{
                if(v[j-1]<totalm)
                    val+=abs(totalm-v[j-1]);
                if(v[j+1]<totalm)
                    val+=abs(totalm-v[j+1]);
            }
            val+=a[j];
        }
        cout << val << "\n";
    }
    }
    return 0;
}




 //     long long j;
    //     for(j=0;j<k;j++){
    //         flag=false;
    //         for(long long i=0;i<n;i++){
    //             if(v[i]==0){
    //                 flag=true;
    //                 break;
    //             }
    //         }
    //         if(!flag){
    //             break;
    //         }
    //         long long pv0=v[0];
    //         for(long long i=1;i<n;i++){
    //             if(v[i]>=1){
    //                 long long prv = v[i+1];
    //                 v[(i+1)%n]++;
    //                 v[i-1]++;
    //                 if(prv<1){
    //                     i++;
    //                 }
    //             }
    //         }
    //         if(pv0>=1){
    //             v[n-1]++;
    //             v[1]++;
    //         }  
    //     }
    //     for(long long i=0;i<n;i++){
    //         sum+=v[i];
    //     }
    //     cout<<sum+(k-j)*2*n<<"\n";
    // }