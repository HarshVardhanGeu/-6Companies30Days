	// #define ull unsigned long long
	/* Function to get the nth ugly number*/
	ull getNthUglyNo(int n) {
	    // code here
	
	vector<ull> temp(n+1,0);
	
	temp[0]=1;
	
	int i=0;
	int j=0;
	int k=0;
	for(int m=1;m<n;m++)
	{
	    temp[m]=min(2*temp[i],min(3*temp[j],5*temp[k]));
	    if(2*temp[i]==temp[m])
	        i++;
	    if(3*temp[j]==temp[m])
	        j++;
	    if(5*temp[k]==temp[m])
	        k++;
	        
	}
	return temp[n-1];
	    
	    
	}