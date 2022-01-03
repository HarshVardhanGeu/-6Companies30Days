string encode(string s)
{     
  //Your code here 
    int len=s.length();
    
    char curr=s[0];
    
    string res="";
    int i=1;
    int count=1;
    while(i<len)
    {
        if(s[i]==curr)
        {
            count++;
        }
        else
        {
            res+=curr+to_string(count);
            count=1;
            curr=s[i];
        }
        i++;
    }
    res+=curr+to_string(count);
    return res;
}     