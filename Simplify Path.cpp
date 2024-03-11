string simplifyPath(string path) {
        vector<string>str;
      stringstream ss(path);
      string s;

      while(getline(ss ,s , '/' ))
      {
          if( !str.empty() && s=="..")
          {
               str.pop_back();
          }
          else if(s!=".." && s!="" && s!=".")
          {
              str.push_back(s);
          }
      }
      string ans="";
        
      for(int i=0 ; i<str.size() ; i++)
      {
          ans.push_back('/');
           ans+=str[i];
      }
      if(ans.empty()) return "/";
      return ans;
    }