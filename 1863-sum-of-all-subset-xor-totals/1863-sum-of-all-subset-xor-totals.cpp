class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
        int n=nums.size();
        int total=0;
        for(int i=0;i<(1<<n);i++)
        {
            int a=1;
            int sum=0;
            for(int j=0;j<n;j++)
            {
                if(i&a)
                {
                    sum=sum^nums[j];
                }
               a= a<<1;
            }
            total=total+sum;
        }
        return total;
        
    }
};