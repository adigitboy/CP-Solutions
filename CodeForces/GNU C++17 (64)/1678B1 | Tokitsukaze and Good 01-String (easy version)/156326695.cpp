    #include<bits/stdc++.h>
    using namespace std;
 
    #include<ext/pb_ds/assoc_container.hpp>
    #include<ext/pb_ds/tree_policy.hpp>
 
 
    using namespace __gnu_pbds;
 
    typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;
 
    int main(){
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        long long t;
        cin>>t;
        while(t--){ 
            long long n;
            cin>>n;
            string s;
            cin>>s;
            
            long long on=0;
            long long zo=0;
            
            vector<long long> ans;
            for(int i=0;i<n;i++){
                if(s[i]=='1'){
                    if(zo>0){
                        ans.push_back(zo);
                    }
                    zo=0;
                    on++;
                }
                else{
                    if(on>0){
                        ans.push_back(on);
                    }
                    on=0;
                    zo++;
                }
            }
            long long cnt=0;
            if(zo%2!=0){
                ans.push_back(zo);
            }
            else if(on%2!=0){
                ans.push_back(on);
            }
            
            for(int i=0;i<ans.size();i++){
                if(ans[i]%2!=0 && ans[i+1]%2!=0){
                    cnt++;
                    ans[i+1]+=1;
                }
                else if(ans[i]%2!=0){
                    cnt+=1;
                    ans[i+1]+=1;
                }
            }
            cout<<cnt<<"\n";
        }
        return 0;
    }