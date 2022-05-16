vector<string> solve(string& s) 
    {
        if (s.length() <= 10)
            return { };
        
        std::vector<std::string> res;
        
        int cur = 9;
        std::string base;
        for (int i = 0; i < 10; i++)
        {
            base += s[i];
        }
        
        std::unordered_map<std::string, int> checker;
        while (cur < s.size())
        {
            if (checker[base] == 0)
            {
                checker[base]++;
            }
            else
            {
                if (checker[base] == 1)
                {
                    res.push_back(base);
                    checker[base]++;
                }
            }
            
            cur++;
            base.erase(base.begin());
            base += s[cur];
        }
        
        return res;
    }