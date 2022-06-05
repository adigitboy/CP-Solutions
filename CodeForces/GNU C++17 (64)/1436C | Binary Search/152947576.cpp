#include <iostream>
using namespace std;
 
int main() {
 // your code goes here
 int n,x,pos;
 cin>>n>>x>>pos;
 int l=0, r= n;
 long long ans=1, M=1000000007;
 int low = x-1,high = n-x;
 while(l<r){
  int mid = (l+r)/2;
  if(mid <= pos){
   if(mid != pos){
    ans = (ans*low)%M;
    low--;
   }
   l = mid+1; 
  }else{
   r = mid;
   ans = (ans*high) % M;
   high--;
  }
 }
 for (int i = 1; i <= (low+high); i++)
     ans = (ans * i) % M;
    cout<<ans<<endl;
 
 return 0;
}