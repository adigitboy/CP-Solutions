#include<bits/stdc++.h>
using namespace std; 
int main(){
    int t;
    cin>>t;
    while(t--){
        long long arr[10] = {0};
        for(int i=0;i<10;i++){
            cin>>arr[i];
        }
        long long k;
        long long sum = 0,j=9;
        long long count = 0;
        cin>>k;
        if(arr[9]>k){
            cout<<10<<endl;
            continue;
        }
        while(sum<=k){
            sum+=arr[j];
            j-=1;
            count++;
        }
        cout<<(10-count)+1<<endl;
    }
    return 0;
}
