void sort012(int a[], int n)
{int zs=0,os=0,ts=0;
   for(int i = 0 ; i <n ; i++)
   {
       if(a[i]==0)
       zs++;
       else if(a[i]==1)
       os++;
       else if(a[i]==2)
       ts++;
       }

int i = 0; 
   while (zs > 0) { 
        a[i++] = 0; 
        zs--; 
    } 
  while (os > 0) { 
        a[i++] = 1; 
        os--; 
    } 
    while (ts > 0) { 
        a[i++] = 2; 
        ts--; 
    } 
  

}
