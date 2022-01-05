 int minSubArrayLen(int target, vector<int>& nums) {
        
        int n=nums.size();
        
        int i=0;
        int j=0;
        int minlen=INT_MAX;
        int currSum=0;
        while(j<n)
        {
            if((currSum+nums[j])>=target)
            {
                currSum+=nums[j];
                while(i<n&&currSum>=target)
                {
                    currSum-=nums[i];
                    i++;
                }
                int len=j-(i-1)+1;
                minlen=min(minlen,len);
            }
            else
            {
                currSum+=nums[j];
                
            }
            j++;
        }
        return minlen==INT_MAX?0:minlen;
    }