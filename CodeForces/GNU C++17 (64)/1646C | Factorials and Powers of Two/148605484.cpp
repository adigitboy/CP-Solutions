 #include <bits/stdc++.h>
 using namespace std;
 #define ll long long
 
 ll st3(ll x)
 {
  ll c=0;
  while(x)
  {
if(x%2)
 c++;
x/=2;
  }
  return c;
 }
 int main() {
 
 ll i;
 ll t;
 cin>>t;
 while(t--)
 {
ll n;
vector<ll> dp(17);
cin>>n;
dp[0]=1;
 
 
ll i;
ll ans=1e15;
ans=1;
for(i=1;i<=16;i++)
{
 ans=ans*i;
 dp[i]=ans;
}
ll j;
 
ans=1e15;
for(i=0;i<=(1<<16);i++)
{
 ll c=0,val=0;
ll mask=i;
 
 
for(j=0;j<=16;j++)
{
 if(1<<j&mask)
 {
  c++;
  val+=(dp[j]);
 }
}
if(val<=n)
{
 ans=min(ans,c+st3(n-val));
}
}
cout<<ans<<endl;
 }
 
 
  
  return 0;
 }