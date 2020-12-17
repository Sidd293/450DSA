#include <iostream>
using namespace std;



int main() {
	int  tests, a[1000][1000],n[1000];

cin>>tests;
for(int t = 0 ; t <tests;t++)
{
cin>>n[t];
for(int i =  1 ;  i < n[t] ;  i++)
{
    cin>>a[i][t];
    
}
cin>>a[0][t];

}
for(int t = 0 ; t <tests;t++)
{
for(int j = 0;j < n[t];j++)
{cout<<a[j][t]<<" ";    //
}
cout<<"\n";
    
}

	return 0;
}
