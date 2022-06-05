#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t;
    cin>>t;
    while(t--){	
        long long n;
        cin>>n;
        int ct=0;
        bool flag = true;
        vector<long long> v(n);
        stack<long long> st;
        for(int i=0;i<n;i++){
            cin>>v[i];
            if(i>0 && v[i]>v[0]){
                flag=false;
            }
        }
        vector<int> ans(n,-1);
        if(!flag){
            cout<<-1<<"\n";
        }
        else if(n==1){
            cout<<0<<"\n";
        }
        else{
            st.push(n-1);
            for(int i=n-2;i>=0;i--){ 
                while(st.empty()==false && v[st.top()] < v[i]){
                    ans[st.top()] = i; 
                    st.pop();
                }
                st.push(i);
            }
            while(!st.empty()){
                ans[st.top()]=-1;
                st.pop();
            }
            int j = n-1;
            if(ans[n-1]==-1){
                cout<<1<<"\n";
            } 
            else{
                while(j!=0){
                    ct++;
                    if(j==-1){
                        ct--;
                        break;
                    }
                    j = ans[j];
                }
                cout<<ct<<"\n";
            }
        }
        
    }
    return 0;
}