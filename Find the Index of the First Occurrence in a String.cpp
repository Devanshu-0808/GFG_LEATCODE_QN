    int strStr(string text, string pattern) {
         int check=0 , check1=0;
           
            for(int i=0 ; i<pattern.size() ; i++)
            {
                check+=pattern[i]-'a'+1;
            }
            
            int i=0 , j=0;
            while(j<text.size())
            {
               check1+=text[j]-'a' +1;
               
               if(j-i +1 <pattern.size())
               {
                   j++;
               }
               else if(j-i +1 == pattern.size())
               {
                     if(check==check1)
                     {
                         int k2=i , flag=1;
                         for(int k=0 ; k<pattern.size() ; k++)
                         {
                             if(pattern[k]!=text[k2++]) 
                             {
                                 flag=0;
                                 break;
                             }
                            
                         }
                         if(flag==1) return i;
                     }
                     
                     check1-=text[i]-'a'+1;    
                   i++;
                   j++;
               }
            }
            return -1;
               
    }