class Solution {
public:
    
    void nextPermutation(vector<int>& nums) {
        int f=0;
        int ad;
        for(int i = nums.size() ;  i >=1;i--)
        {if(nums[i]>nums[i-1])
        { int  s=0;
         int ad;
            for(int  j = i-1 ; j < nums.size();j++)
            {
                if(s<nums[j]-nums[i-1])
                {   s =nums[j]-nums[i-1];
                 ad= j;
                 
                 }
            }
            
            nums[i-1] = nums[ad] + nums[i-1];
             nums[ad] = nums[i-1] - nums[ad];
             nums[i-1] = nums[i-1] - nums[ad];
            f=1;
       goto here;
        }
         
    }
       
        if(f==0)
{
sort(nums.begin(), nums.end()); 

        }
   here: 
        ;

    }
};
