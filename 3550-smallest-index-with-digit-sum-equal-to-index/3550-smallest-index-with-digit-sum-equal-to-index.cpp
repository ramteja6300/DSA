bool  checker(int n,int i)
{
    int t=n;
    int sum=0;
    while(t>0)
    {
        int r=t%10;
        sum=sum+r;
        t=t/10;
    }
    if(sum==i) return true;
    return false;

}
class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        for(int i=0;i<nums.size();i++)
        {
            int k=nums[i];
            if(checker(k,i))
            {
                return i;
            }
        }
        return -1;
    }
};