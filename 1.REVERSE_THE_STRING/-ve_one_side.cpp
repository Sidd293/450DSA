#include <iostream>
using namespace std;

int main() {
int a[10] = {-2,4,2,-7,-4,2};
int b[10],c[10];
int ctb=0,ctc=0;
for(int i = 0 ; i<6;i++)
{
if(a[i]<0)
{
b[ctb] = a[i];
ctb++;
}
if(a[i]>=0)
{
c[ctc] = a[i];
ctc++;
}
cout<<"\n";
}
int i = 0;
int x= ctb;
while(ctb>0)
{a[i] = b[i];
    i++;
    ctb--;
}

while(ctc>0)
{a[i] = c[i-x];
    i++;
    ctc--;
}
for(int i = 0 ; i<6;i++)
{
    cout<<a[i]<<" ";
}

	return 0;
}
