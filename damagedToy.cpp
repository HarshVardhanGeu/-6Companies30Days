int findPosition(int N , int M , int K) {
        // code here
         if(N==1)
           return 1;
       int res=M%N+K-1;
       if(res==N)
           return res;
       else
           return res%N;
    }