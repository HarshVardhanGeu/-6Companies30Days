int helper(string str,int index,vector<int> &dp)
	{
	    const int m=1000000007;
	    if(index>=str.length()) return 1;
	    
	    if(dp[index]!=-1) return dp[index];
	    
	    int num=str[index]-'0';
	    int count=0;
	    
	    if(num>=1&&num<=9)
	    {
	        count=helper(str,index+1,dp)%m;
	        if(index+1<str.size()){
	            
	            int num2=num*10+(str[index+1]-'0');
	            if(num2>=10&&num2<=26)
	            {
	                count=(count%m+helper(str,index+2,dp)%m)%m;
	            }
            }
            	       
	    }
	     return dp[index]= count;
	}
		int CountWays(string str){
		    // Code here
		    vector<int> dp(str.length(),-1);
		    return helper(str,0,dp);
		}