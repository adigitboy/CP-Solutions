#include<bits/stdc++.h>
using namespace std;
 
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
#define int long long
 
using namespace __gnu_pbds;
 
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;
 
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t;
    cin>>t;
    while(t--){ 
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        if(n==1)
        {
            cout<<"YES"<<endl;
            continue;
        }
        int sum=0;
        map<int,int> mp;
        for(int i=0;i<n;i++) sum+=a[i],mp[a[i]]++;
        priority_queue<int> pq;
        pq.push(sum);
        while(pq.size()<n)
        {
            int x=pq.top();
            // cout<<x<<"\n";
            pq.pop();
            int p=x/2,q=(x+1)/2;
            if(mp.count(p)) mp[p]--,n--;
            else pq.push(p);
            if(mp[p]==0) mp.erase(p);
            if(mp.count(q)) mp[q]--,n--;
            else pq.push(q);
            if(mp[q]==0) mp.erase(q);
            // cout<<pq.size()<<" "<<n<<"\n";
        }
        if(pq.size()==0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}