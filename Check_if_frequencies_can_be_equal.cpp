	bool sameFreq(string s)
	{
	    unordered_map<char , int >mp;
	    int ma=0 ,mi=0 ; 
	    for(int c=0 ; c<s.size() ; c++)
	    {
	        mp[s[c]]++;
	    }
          int maxi=INT_MIN , mini=INT_MAX;
	    for(auto val : mp)
	    {
	        maxi=max(maxi , val.second);
	        mini=min(mini , val.second);
	    }
	     for(auto val : mp)
	    {
	       if(val.second==maxi) ma++;
	       if(val.second==mini) mi++;
	    }
	    
	    if(maxi==mini  || (mini== maxi-1 && ma==1)) return 1;
	    if(mi==1 && mini==1 && ma+mi ==mp.size()) return 1;
	    
	
	    return 0;
	}
	///////