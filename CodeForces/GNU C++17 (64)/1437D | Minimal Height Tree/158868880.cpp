#include<bits/stdc++.h>
using namespace std;
 
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
 
 
using namespace __gnu_pbds;
 
template<class T>
 
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
 
template<class key, class value, class cmp = std::less<key>>
using ordered_map = tree<key, value, cmp, rb_tree_tag, tree_order_statistics_node_update>;
 
long long cnt = 0;
 
void merge(vector<long long> &v,long long low,long long mid,long long high){
    vector<long long> ans;
    long long n = v.size();
    long long left = low,right=mid+1;
    while(left<=mid && right<n){
        if(v[left]<=v[right]){
            ans.push_back(v[left]);
            left++;
        }
        else{
            cnt=cnt + mid-left+1;
            ans.push_back(v[right]);
            right++;
        }
    }
    while(left<=mid){
        ans.push_back(v[left]);
        left++;
    }
    while(right<n){
        ans.push_back(v[left]);
        right++;
    }
    for(int i=low;i<=high;i++){
        v[i]=ans[i-low];
    }
}
 
void mergeSort(vector<long long> &v,long long low,long long high){
    if(low<high){
        
        long long mid = (low + high)/2;
        mergeSort(v,low,mid);
        mergeSort(v,mid+1,high);
        merge(v,low,mid,high);
    }
}
 
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t;
    cin>>t;
    while(t--){ 
        long long n;
        cin>>n;
        vector<long long> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        long long cnt = 1;
        long long lvl = 1;
        for(int i=2;i<n;i++){
            long long temp = max((long long)1,cnt);
            while(i<n && temp>0){
                if(v[i]>v[i-1]){
                    cnt++;
                }
                else{
                    temp--;
                    if(temp==0){
                        lvl++;
                        break;
                    }
                }
                i++;
            }
        }
        cout<<lvl<<"\n";
    }
    return 0;
}