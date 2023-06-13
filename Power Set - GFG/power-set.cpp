//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
	
	    vector<string> solve(string s){
	        if(s.size()==0){
		    vector<string> bres;
		    bres.push_back("");
		    return bres;
		    }
		    
		    char ch= s[0];
		    string ros= s.substr(1);
		    vector<string> rres= solve(ros);
		    //sort(rres.begin(), rres.end());
		    
		    vector<string> mres;
		    for(string rstr: rres)
		        mres.push_back(ch+ rstr);
		    for(string rstr: rres)
		        mres.push_back(rstr);
		    return mres;
	    }
	    
	    
	    
	
	
	
		vector<string> AllPossibleStrings(string s){
		    vector<string> ans= solve(s);
		    //cout<<ans.size()<<endl;
		    sort(ans.begin(), ans.end());
		    vector<string> newans;
		    for(int i=1; i< ans.size(); i++){
		        newans.push_back(ans[i]);
		    }
		    return newans;
		    
		}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string s;
		cin >> s;
		Solution ob;
		vector<string> res = ob.AllPossibleStrings(s);
		for(auto i : res)
			cout << i <<" ";
		cout << "\n";

	}
	return 0;
}
// } Driver Code Ends