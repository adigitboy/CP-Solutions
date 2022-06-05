#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int arr[n];
        int count_0 = 0, count_1 = 0, negcount = 0, slow = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] == 0)
            {
                count_0++;
            }
            else if (arr[i] == 1)
            {
                count_1++;
            }
            else if (arr[i] == -1)
            {
                negcount++;
            }
            else if(arr[i]>k)
            {
                slow++;
            }
        }
        if (ceil(n / 2.0) > n - negcount)
        {
            cout << "Rejected" << endl;
        }
        else if (slow > 0)
        {
            cout << "Too Slow" << endl;
        }
        else if (count_0 + count_1 == n)
        {
            cout << "Bot" << endl;
        }
        else
        {
            cout << "Accepted" << endl;
        }
    }
    return 0;
}