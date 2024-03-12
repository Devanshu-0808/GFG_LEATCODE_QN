int lengthOfLastWord(string s) {
        int length=0 , ans;

        for(int i=0 ; i<s.size() ; i++)
        {
            if(s[i]!=' ')
            {
                length++;
            }
            else
            {
                if(length!=0)
                ans=length;

                length=0;
            }
            
        }
        if(length!=0) ans=length;
        return ans;
    }
