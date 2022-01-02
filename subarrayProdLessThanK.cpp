int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        
        if(k==0) return 0;
        int count=0;
        int i=0;
        int j=0;
        
        int curr_prod=1;
        int n=nums.size();
        while(i<n&&j<n)
        {
            if(curr_prod*nums[j]<k)
            {
                curr_prod*=nums[j];
                count+=(j-i+1);
                j++;
            }
            else
            {
                if(curr_prod>=nums[i])
                    curr_prod/=nums[i];
                i++;
                if(i>j)
                    j=i;
            }
        }
        return count;
    }