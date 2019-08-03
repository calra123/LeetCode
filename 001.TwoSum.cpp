//https://leetcode.com/problems/two-sum/submissions/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector <int> index;
        for(auto i=nums.begin();i!=nums.end();++i)
        {
            int a=*i;
            int b=target-a;
            
            
            for(auto j=i+1;j!=nums.end();++j)
            {
                
                if(b==*j)
                {
                    index.push_back(i-nums.begin());
                    index.push_back(j-nums.begin());
                    
                        
                }
            }
        }
        
        return index;
        
    }
};
