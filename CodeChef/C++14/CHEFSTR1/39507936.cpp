#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    
	    long long arr[n];
	    for(int i=0;i<n;i++)cin >> arr[i];
	    
	    long long ans = 0;
	    for(int i=1;i<n;i++)ans+=(abs(arr[i]-arr[i-1])-1);
	    
	    cout << ans << endl;
	}
}