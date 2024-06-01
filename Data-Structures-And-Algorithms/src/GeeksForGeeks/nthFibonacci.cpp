// https://www.geeksforgeeks.org/problems/nth-fibonacci-number1335/1?page=1&category=Mathematical&sortBy=submissions

//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    int nthFibonacci(int n){
        int firstFib = 0;
        int secondFib = 1;
        int nthFib = 1;
        long long moduleNumber = 1e9+7;
        for (int i = 2; i <= n; ++i) {
            nthFib = ((long long)firstFib + secondFib) % moduleNumber;
            firstFib = secondFib;
            secondFib = nthFib;
        }
        return nthFib;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.nthFibonacci(n) << endl;
    }
    return 0;
}

// } Driver Code Ends