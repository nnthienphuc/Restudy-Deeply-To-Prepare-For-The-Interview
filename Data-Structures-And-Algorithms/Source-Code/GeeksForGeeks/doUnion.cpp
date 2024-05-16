// https://www.geeksforgeeks.org/problems/union-of-two-arrays3538/1?page=1&category=Mathematical&sortBy=submissions

//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
#include<set>
using namespace std;

// } Driver Code Ends
//User function template in C++

class Solution{
    public:
    //Function to return the count of number of elements in union of two arrays.
    int doUnion(int a[], int n, int b[], int m)  {
        std::set <int> unionTwoArrays;
        for (int i = 0; i < n; ++i)
            unionTwoArrays.insert(a[i]);
        for (int i = 0; i < m; ++i)
            unionTwoArrays.insert(b[i]);
        return unionTwoArrays.size();
    }
};

//{ Driver Code Starts.

int main() {
	
	int t;
	cin >> t;
	
	while(t--){
	    
	    int n, m;
	    cin >> n >> m;
	    int a[n], b[m];
	   
	    for(int i = 0;i<n;i++)
	       cin >> a[i];
	       
	    for(int i = 0;i<m;i++)
	       cin >> b[i];
	    Solution ob;
	    cout << ob.doUnion(a, n, b, m) << endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends