// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


//User function template for C++
class Solution{
public:
	void merge(int arr1[], int arr2[], int n, int m) {
	 vector<int> ans; 
     int ni=0,mi=0;
	 while(ni<n || mi<m)
	 { if(ni>n)
	 {
	     arr1[ni]=0;
	 }
	 if(mi>m)
	 {
	     arr2[mi]=0;
	 }
	  if(arr1[ni]==arr2[mi])
	 {    ans.push_back(arr2[ni]);
          ni++;
          mi++;
	 }
	    else if(arr1[ni]<arr2[mi])
	 {    ans.push_back(arr1[ni]);
          ni++;
	 }else
	 {    ans.push_back(arr2[mi]);
	      mi++;
	 }
	 }
 int i = 0;
 while(i<m+n)
 {if(i<n)
 {arr1[i] = ans[i];}
else
 {arr2[i-n] = ans[i];}
 i++;
     
 }
   
}
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, i;
        cin >> n >> m;
        int arr1[n], arr2[m];
        for (i = 0; i < n; i++) {
            cin >> arr1[i];
        }
        for (i = 0; i < m; i++) {
            cin >> arr2[i];
        }
        Solution ob;
        ob.merge(arr1, arr2, n, m);
        for (i = 0; i < n; i++) {
            cout << arr1[i] << " ";
        }
        for (i = 0; i < m; i++) {
            cout << arr2[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}  // } Driver Code Ends
