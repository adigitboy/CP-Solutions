//Check out my youtube channel: https://www.youtube.com/c/QuarantineEngineers
//Join me on discord to discuss: https://discord.com/invite/6kcmVQx8Fx
#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
const int mod=1000000007;
const int MAX=100005;
mt19937_64 rng(std::chrono::steady_clock::now().time_since_epoch().count());
// int BIT[200001];
// int get(int i,int n){
//   int ans=0;
//   while(i){
//     ans+=BIT[i];
//     i-=(i&-i);
//   }
//   return ans;
// }
// void update(int x,int n){
//   while(x<=n){
//     BIT[x]+=1;
//     x+=(x&-x);
//   }
  
// }
int func(int i, int n,vector<int>&prev, int arr[]){
  while(i<n and arr[i]==prev.back()){
      // curr++;
      for(int j=0;j<prev.size();j++){
        cout<<prev[j]<<".";
      }
 
      cout<<arr[i]<<endl;
      prev.push_back(arr[i]);
      i++;
    }
    return i;
}
void solve(){
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  int i=1;
  vector<int>prev;
  while(arr[0]!=1){
 
  }
  prev.push_back(arr[0]);
  // int curr=0;
  cout<<arr[0]<<endl;
  // while(i<n and arr[i]==prev.back()){
  //     // curr++;
  //     for(int j=0;j<prev.size();j++){
  //       cout<<prev[j]<<".";
  //     }
 
  //     cout<<arr[i]<<endl;
  //     prev.push_back(arr[i]);
  //     i++;
  //   }
  i=func(i,n,prev,arr);
  while(i<n){
    if(prev.empty()){
      cout<<arr[i]<<endl;
      prev.push_back(arr[i]);
      i++;
      continue;
    }
    if(arr[i]==prev.back()){
      if(arr[i]==1){
        i=func(i,n,prev,arr);
      }
      else{
      prev.pop_back();
      
      }
      continue;
    }
    else if(arr[i]==prev.back()+1){
      prev.pop_back();
      for(int j=0;j<prev.size();j++){
        cout<<prev[j]<<".";
        // if(j+1!=(int)prev.size()){
        // }
      }
      cout<<arr[i]<<endl;
    }
    else{
      if(arr[i]==1){
      for(int j=0;j<prev.size();j++){
        cout<<prev[j]<<".";
        // if(j+1!=(int)prev.size()){
        // }
      }
      cout<<arr[i]<<endl;
      }
      else{
        prev.pop_back();
        continue;
      }
 
      // cout<<arr[i]<<endl;
    }
 
    prev.push_back(arr[i]);
    i++;
  }
 
  // cout<<endl;
}
int32_t main(){
      ios_base::sync_with_stdio(0);
      cin.tie(0);
      // srand(time(0));
      int t;
      cin>>t;
        // t=1;
      while(t--){
        // cout<<"Case #"<<tt<<": ";
            solve();
            // tt++;
      }
      return 0;
}