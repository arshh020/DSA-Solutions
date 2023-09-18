//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{

  public:
    int findrange(int arr[], int n){
        int range = 0;
	    for (int i = 0; i < n; i++){
		    range = range + arr[i];
	    }
	    return range;
    }
    
    
	int minDifference(int arr[], int n)  { 
	    int range= findrange(arr, n);
	    bool t[n + 1][range + 1];
	for (int i = 0; i <= n; i++) {
		for (int j = 0; j <= range; j++) {
			if (i == 0)
				t[i][j] = false;
			if (j == 0)
				t[i][j] = true;
		}
	}

	for (int i = 1; i <= n ; i++) {
		for (int j = 1; j <= range; j++) {
			if (arr[i - 1] <= j)
				t[i][j] = t[i - 1][j - arr[i - 1]] || t[i - 1][j];
			else
				t[i][j] = t[i - 1][j];
		}
	}

	vector <int> tvalues;
	for (int i = 0; i <= range / 2; i++) {
		if (t[n][i] == true)
			tvalues.push_back(i);
	}

	int mn = INT_MAX;
	for (int i = 0; i < tvalues.size(); i++) {
		mn = min(mn, range - 2 * tvalues[i]);
	}

	return mn;
	    
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

        int a[n];
        for(int i = 0; i < n; i++)
        	cin >> a[i];

       

	    Solution ob;
	    cout << ob.minDifference(a, n) << "\n";
	     
    }
    return 0;
}
// } Driver Code Ends