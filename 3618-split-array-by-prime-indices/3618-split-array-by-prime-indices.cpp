const int n=100001;
vector<bool> a(n,true);
void prime()
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
    long long splitArray(vector<int>& nums) {
        prime();
        vector<int> A;
        vector<int> B;
        int k=nums.size();
        for(int i=0;i<k;i++)
        {
            if(a[i]) A.push_back(nums[i]);
            else B.push_back(nums[i]);
        }
        long long s1=accumulate(A.begin(),A.end(),0LL);
        long long s2=accumulate(B.begin(),B.end(),0LL);
        return abs(s1-s2);
    }
};