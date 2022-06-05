#include <bits/stdc++.h>
using namespace std;
 
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
 
using namespace __gnu_pbds;
 
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    long long n, q;
    cin >> n >> q;
    string s;
    cin >> s;
    string abc, acb, bac, bca, cab, cba;
    for (int i = 0; i < n; i++)
    {
        if (i % 3 == 0)
        {
            abc.push_back('a');
        }
        if (i % 3 == 1)
        {
            abc.push_back('b');
        }
        if (i % 3 == 2)
        {
            abc.push_back('c');
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (i % 3 == 0)
        {
            acb.push_back('a');
        }
        if (i % 3 == 1)
        {
            acb.push_back('c');
        }
        if (i % 3 == 2)
        {
            acb.push_back('b');
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (i % 3 == 0)
        {
            bac.push_back('b');
        }
        if (i % 3 == 1)
        {
            bac.push_back('a');
        }
        if (i % 3 == 2)
        {
            bac.push_back('c');
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (i % 3 == 0)
        {
            bca.push_back('b');
        }
        if (i % 3 == 1)
        {
            bca.push_back('c');
        }
        if (i % 3 == 2)
        {
            bca.push_back('a');
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (i % 3 == 0)
        {
            cab.push_back('c');
        }
        if (i % 3 == 1)
        {
            cab.push_back('a');
        }
        if (i % 3 == 2)
        {
            cab.push_back('b');
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (i % 3 == 0)
        {
            cba.push_back('c');
        }
        if (i % 3 == 1)
        {
            cba.push_back('b');
        }
        if (i % 3 == 2)
        {
            cba.push_back('a');
        }
    }
    vector<long long> dpa1(n+1,0);
    vector<long long> dpa2,dpb1,dpb2,dpc1,dpc2;
    dpa2=dpb1=dpb2=dpc1=dpc2=dpa1;
    for(int i=0;i<s.size();i++){
        if(i==0 && abc[i]!=s[i]){
            dpa1[i]++;
        }
        if(i==0 && acb[i]!=s[i]){
            dpa2[i]++;
        }
        if(i==0 && bac[i]!=s[i]){
            dpb1[i]++;
        }
        if(i==0 && bca[i]!=s[i]){
            dpb2[i]++;
        }
        if(i==0 && cab[i]!=s[i]){
            dpc1[i]++;
        }
        if(i==0 && cba[i]!=s[i]){
            dpc2[i]++;
        }
        if(i>0){
            
            dpa1[i] = (abc[i]==s[i])? dpa1[i-1] : 1+dpa1[i-1];
            dpa2[i] = (acb[i]==s[i])? dpa2[i-1] : 1+dpa2[i-1];
            dpb1[i] = (bac[i]==s[i])? dpb1[i-1] : 1+dpb1[i-1];
            dpb2[i] = (bca[i]==s[i])? dpb2[i-1] : 1+dpb2[i-1];
            dpc1[i] = (cab[i]==s[i])? dpc1[i-1] : 1+dpc1[i-1];
            dpc2[i] = (cba[i]==s[i])? dpc2[i-1] : 1+dpc2[i-1];
        }
    }
    // for(auto it : dpb1){
    //     cout<<it<<" ";
    // }
    // cout<<"\n";
    for(int i=0;i<q;i++){
        long long u,v;
        cin>>u>>v;
        u--;v--;
        long long ans = INT_MAX;
        if(u==0){
            ans = dpa1[v];
            ans = min(ans,dpa2[v]);
            ans = min(ans,dpb1[v]);
            // cout<<dpb1[v]<<" ";
            ans = min(ans,dpb2[v]);
            ans = min(ans,dpc1[v]);
            ans = min(ans,dpc2[v]);
        }
        else{
            ans = dpa1[v] - dpa1[u-1];
            ans = min(ans,dpa2[v] - dpa2[u-1]);
            ans = min(ans,dpb1[v] - dpb1[u-1]);
            ans = min(ans,dpb2[v] - dpb2[u-1]);
            ans = min(ans,dpc1[v] - dpc1[u-1]);
            ans = min(ans,dpc2[v] - dpc2[u-1]);
        }
        cout<<ans<<"\n";
    }
    return 0;
}