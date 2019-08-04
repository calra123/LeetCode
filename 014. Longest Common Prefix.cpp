//https://leetcode.com/problems/longest-common-prefix/
//An O(nk) k= common substring

class Solution {
public:
    int minSize(vector<string>& strs)
    {
       
        int min=INT_MAX;
        for(int i=0;i<strs.size()-1;i++)
        {
             
            if(min>strs[i].size())
            {
                min=strs[i].size();
            }
    
        }
        
        return min;
    }
    string longestCommonPrefix(vector<string>& strs) {
       
        string ans="";
        if(strs.size()==0)
            return ans;
        else if(strs.size()==1)
            return strs[0];
        int flag=0;
        int minLen=minSize(strs);
        for(int i=0;i<minLen;i++)
        {
            flag=0;
            for(int j=0;j<strs.size()-1;j++)
            {
                if(strs[j][i]!=strs[j+1][i])
                {
                    flag=1;
                    break;
                }
                    
            }
            
            if(flag==0)
            ans+=strs[0][i];
            else
            {
                break;
            }
        }
        
        return ans;
        
    }
};
