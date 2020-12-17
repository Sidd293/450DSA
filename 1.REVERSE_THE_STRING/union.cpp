#include <iostream>
 using namespace std;
 
 int calc_ans(int* a,int* b,int m,int n)
 {int  ct =0;
     for(int i = 0 ; i <m; i++)
     {
         for(int j = 0 ; j <m; j++)
         { 
             if(a[i]==b[j])
             ct++;
         }
     }
     return ct;
 }
int main() {
	int tests ,a[1000],b[1000],ans[1000];
	cin>>tests;
	for(int t = 0 ; t < tests ; t++)
	{int m,n;
	    cin>>m>>n;
	    for(int i = 0 ; i <m; i++)
         cin>>a[i];
        for(int i = 0 ; i <n; i++)
         cin>>b[i];
         ans[t] =m+n-calc_ans(a,b,m,n);
	}
	for(int t = 0 ; t < tests ; t++)
	{
	    cout<<ans[t]<<"\n";
	}
	return 0;
}
