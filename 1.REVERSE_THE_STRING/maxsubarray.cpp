int maxSubarraySum(int arr[], int n){
    int ls = 0;
    int sum  = 0;
    for(int i =0 ; i <n; i++)
    { 
         sum=max(arr[i],sum+arr[i]);
        ls = max(sum,ls);
         
            
            
    
       
     
    }
   return ls;
}
