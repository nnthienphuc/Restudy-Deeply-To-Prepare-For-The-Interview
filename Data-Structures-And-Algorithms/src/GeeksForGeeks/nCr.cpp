// https://www.geeksforgeeks.org/problems/ncr1019/1?page=1&category=Mathematical&sortBy=submissions

//{ Driver Code Starts
// Initial Template for C++

// n! / (k! * (n - k)!)

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int mod=1e9+7;

    long long binExp(long long x, long long y) {
        long long res=1;
        while(y>0) {
            if(y&1) {
                res=(res*x)%mod;
            }
            x=(x*x)%mod;
            y/=2;
        }
        return res;
    }

    int nCr(int n, int r) {
        if(n<r)
            return 0;
        long long num=1, den=1;
        int k=min(r,n-r);
        for(int i=1; i<=k; i++) {
            num=(num*(n-i+1))%mod;
            den=(den*i)%mod;
        }
        long long denInv=binExp(den,mod-2);
        long long res=(num*denInv)%mod;
        return res;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, r;
        cin>>n>>r;
        
        Solution ob;
        cout<<ob.nCr(n, r)<<endl;
    }
    return 0;
}
// } Driver Code Ends