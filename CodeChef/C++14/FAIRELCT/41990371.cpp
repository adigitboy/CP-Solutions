#include<bits/stdc++.h>
using namespace std;
int recur(long long a[],long long b[],long long result_a,long long result_b,long long m,long long n){
    int count = 0;
    int i=0;
    while(result_a<=result_b && i<m){
        result_a = 0;
        result_b = 0;
        count++;
        int temp = a[i];
        a[i] = b[i];
        b[i] = temp;
        for(int j=0;j<m;j++){
            result_a+=a[j];
        }
        for(int j=0;j<n;j++){
            result_b+=b[j];
        }
        i++;
    }
    if(result_a<=result_b){
        return -1;
    }
    return count;
}
int main(){
    int t;
    cin>>t;
    while(t--){
    long long m,n;
    long long result_a=0,result_b=0;
    cin>>m>>n;
    long long a[m],b[n];
    for(int i=0;i<m;i++){
        cin>>a[i];
        result_a+=a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
        result_b+=b[i];
    }
    sort(a,a+m);
    sort(b,b+n,greater<int>());
    cout<<recur(a,b,result_a,result_b,m,n)<<endl;
    }
}
