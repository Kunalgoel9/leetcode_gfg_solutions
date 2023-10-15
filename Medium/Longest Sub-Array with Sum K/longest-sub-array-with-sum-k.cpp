//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    int lenOfLongSubarr(int A[],  int N, int K) 
    { 
        // Complete the function
          // Complete the function
        int maxWindow=0;
        int sum=0;
        unordered_map<int,int> map;
        
        for(int i=0;i<N;i++){
            
            sum=sum+A[i];
            
            if(sum==K) maxWindow=i+1;
            
                if(map.count(sum - K)){
                maxWindow=max(maxWindow , i-map[sum-K]);
                }
            
            if(!map.count(sum)){
                map[sum]=i;
            }
            

        }
        
        return maxWindow;
        
    } 

};

//{ Driver Code Starts.

int main() {
	//code
	
	int t;cin>>t;
	while(t--)
	{
	    int n, k;
	    cin>> n >> k;
	    int a[n];
	    
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	   Solution ob;
	   cout << ob.lenOfLongSubarr(a, n , k)<< endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends