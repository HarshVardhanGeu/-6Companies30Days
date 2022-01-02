vector<vector<string> > Anagrams(vector<string>& stl) {
        //code here
        
        unordered_map<int,vector<string>> m;
        for(auto s:stl)
        {
            int mask=0;
            for(int i=0;i<s.length();i++)
            {
                int num=s[i]-'a';
                mask=mask|(1<<num);
            }
            m[mask].push_back(s);
        }
        
        vector<vector<string>> res;
        
        for(auto i:m)
        {
            res.push_back(i.second);
        }
        
        return res;
        
        
    }