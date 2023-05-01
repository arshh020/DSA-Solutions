//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution
{
public:
    int largestm(vector<int> &arr, int idx, int n) {
    if (idx == n - 1)
        return arr[idx];
    int misa = largestm(arr, idx + 1, n);
    if (misa > arr[idx])
        return misa;
    else
        return arr[idx];
    }
        
    int largest(vector<int> &arr, int n)
    {
    int max= largestm(arr,0,n);
    return max;
    }
};


//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int>arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        Solution ob;
        cout << ob.largest(arr, n) << "\n";
    }
    return 0;
}

// } Driver Code Ends