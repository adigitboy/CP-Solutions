#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,total=0,grtotal=0;
        cin>>n>>k;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for(int i =0;i<n;i++)
        {
             total += arr[i];
        }
        for(int i = 0;i<n;i++)
        {
            if(arr[i]>k)
            {
                arr[i] = k;
            }
        }
         for(int i =0;i<n;i++)
        {
             grtotal += arr[i];
        }
        cout<<(total - grtotal)<<endl;
    }
    return 0;
}
