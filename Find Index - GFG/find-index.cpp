//{ Driver Code Starts
#include <iostream>
#include <bits/stdc++.h> 
#include <vector> 
using namespace std; 

// } Driver Code Ends
class Solution
{
  public:
  int firstIndex(vector<int> &arr, int idx, int x, int n) {
	if (idx == n)
		return -1;
	if (arr[idx] == x)
		return idx;
	else {
		int fiisa = firstIndex(arr, idx + 1, x, n);
		return fiisa;
	}
      
  }
	
	int lastIndex(vector<int> &arr, int idx, int x, int n) {
	if (idx == n)
		return -1;
	int liisa = lastIndex(arr, idx + 1, x, n);
	if (liisa == -1) {
		if (arr[idx] == x)
			return idx;
		else
			return -1;
	}
	else
		return liisa;
}
    vector<int> findIndex(int a[], int n, int key)
    {
        vector<int> arr;
        for(int i=0; i<n; i++){
            arr.push_back(a[i]);
        }
        int firstel= firstIndex(arr, 0, key, n);
        int lastel = lastIndex(arr, 0, key, n);
        //cout << firstel << lastel;
        vector<int> fnle;
        fnle.push_back(firstel);
        fnle.push_back(lastel);
        return fnle;
    }
  
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        vector<int> res;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        int key;
        cin>>key;
        Solution ob;
        res=ob.findIndex(arr, n, key);
        for (int i = 0; i < res.size(); i++) 
        cout << res[i] << " ";
        cout << "\n";
    }
    
    return 0;
}

// } Driver Code Ends