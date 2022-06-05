// Problem: C. Fault-tolerant Network
// Contest: Codeforces - Educational Codeforces Round 124 (Rated for Div. 2)
// URL: https://codeforces.com/contest/1651/problem/C
// Memory Limit: 256 MB
// Time Limit: 2000 ms
 
 
/*
 
*/
#include<bits/stdc++.h>
using namespace std;
#ifndef ONLINE_JUDGE
   #define now(x) cout<<#x<<" : "<<x<<'\n'; 
   #define pm(m)  cout<<#m<<" : "; for(auto it:m) cout<<it.fs<<" "<<it.ss<<'\n'; 
   #define fv(v)  cout<<#v<<" : "; for(auto it:v) cout<<it<<" "; cout<<'\n'; 
#else
   #define now(x) ; 
   #define fv(v) ; 
   #define pm(m) ; 
#endif
const int mod = 1000000007; 
const double pi = 3.1415926536;
const long long oo=1e18;
#define FOR(i,z,n) for(int i=z;i<n;i++)
#define f(n) for(int i=0;i<n;i++)
#define int ll
typedef long long ll;
typedef  map<int,int> mii;
typedef  vector<int> vi;
#define fs first 
#define ss second
#define itf(v) v.begin(),v.end()
#define itr(v) v.rbegin(),v.rend()
int modu(int a,int b=mod)  {return (a%b+b)%b;}
int log2(int x){return __builtin_clzll(1LL) - __builtin_clzll(x);}
template<typename T> T maxxx() {return numeric_limits<T>::max();}
const int maxx=maxxx<int>();
 
/* ---------------TEMPLATE ENDS HERE-------------*/
 
int dx[]={-1,0,1,0};
int dy[]={0,1,0,-1};
 
void solve()
{
       int n=0,m=0,k=0,x=0,count=0,sum=0,ans=0;
       cin>>n;
       vi v(n),t(n);
       f(n) cin>>v[i];
       f(n) cin>>t[i];
       int a[2]={v[0],v[n-1]};
       int b[2]={t[0],t[n-1]};
       sort(itf(v)),sort(itf(t));
       v.push_back(oo),t.push_back(oo);
       // fv(v)fv(t)fv(a)fv(b)
       
  ans=min(abs(a[0]-b[0])+abs(a[1]-b[1]),abs(a[0]-b[1])+abs(a[1]-b[0]));
       //now(ans)
       
       int p[2],z[2];
       int p1=lower_bound(itf(v),b[0])-v.begin();
       z[0]=min(p1-1>=0?b[0]-v[p1-1]:oo,v[p1]-b[0]);
       
       int p2=lower_bound(itf(v),b[1])-v.begin();
        z[1]=min(p2-1>=0?b[1]-v[p2-1]:oo,v[p2]-b[1]);
 
       int p3=lower_bound(itf(t),a[0])-t.begin();
     p[0]=min(p3-1>=0?a[0]-t[p3-1]:oo,t[p3]-a[0]);
     
       int p4=lower_bound(itf(t),a[1])-t.begin();
        p[1]=min(p4-1>=0?a[1]-t[p4-1]:oo,t[p4]-a[1]);
 
       
       for(int i=0;i<2;i++)
       {
        for(int j=0;j<2;j++)
        {
         x=abs(a[i]-b[j]);
         
         k=min(abs(a[1-i]-b[1-j]),p[1-i]+z[1-j]);
         
         ans=min(ans,x+k);
        }
       }
       ans=min(ans,p[0]+p[1]+z[0]+z[1]);
       cout<<ans<<'\n';
}
int32_t main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(NULL);
 
 /*
 #ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
 #endif 
 */
  
  int test_case=1;
 cin>>test_case;
 for(int _=0;_<test_case;_++)
 { //cout<<"Case #"<<_+1<<": ";
  solve();
 }
 return 0;
 
}