const int  n=1001;
vector<bool> a(n,true);
void seive()
{
    a[0]=a[1]=false;
    if(a[4]==false) return;
    for(int i=2;i*i<=n;i++)
    {
        if(a[i])
        {
            for(int j=i*i;j<n;j=j+i)
            {
                if(a[j]) a[j]=false;
            }
        }
    }

}
class Solution {
public:
    bool primeSubOperation(vector<int>& nums) {
        int n=nums.size();
        seive();
        for(int i=n-2;i>=0;i--)
        {
            if(nums[i]<nums[i+1]) continue;
            if(nums[i]>=nums[i+1])
            { 
               for(int j = 2; j < nums[i]; j++)
                {
                    if(a[j] && (nums[i]-j)<nums[i+1])
                    {
                        nums[i]=nums[i]-j;
                        break;
                    }
                }
                if(nums[i]>=nums[i+1]) return false;

            }

        }
        return true;
        
    }
};