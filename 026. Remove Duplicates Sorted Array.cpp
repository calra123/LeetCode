//toLearn - erase returns the pointer to the next value, if it's the last element then End()
//https://leetcode.com/problems/remove-duplicates-from-sorted-array/

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        if(nums.size()==0)
            return 0;
            
        
        for(auto it=nums.begin();it<nums.end()-1;it++)
        {
            auto j=it+1;
         
                if(*it==*j)
                {
                   
                    nums.erase(it);
                    it=it-1;
                    
                }
            
        }
        
    return nums.size();
    }
};
