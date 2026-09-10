class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int old=0;
        int current=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)
            {
                if(current>=old) old=current;
                current=0;
            }
            else current++;
        }
        if(current >= old) old = current;
        return old;
        
    }
};