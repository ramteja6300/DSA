class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int ans=0;
        for(int i=0;i<nums.size();i++)
        {
            int k=log10(nums[i])+1;
            if(k%2==0) ans++;
        }
        return ans;
        
    }
};