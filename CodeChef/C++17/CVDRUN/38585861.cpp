#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,x,y,j=0;
        cin>>n>>k>>x>>y;
        if(y>n)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            {
                for(int i = 0;i<=n;i++)
                {
                    if((x+k*i)%n==y)
                    {
                        cout<<"YES"<<endl;
                        j = 1;
                        break;
                    }
                }
                if(j==0)
                {
                    cout<<"NO"<<endl;
                }
            }
        }
        
    }
    return 0;
}

