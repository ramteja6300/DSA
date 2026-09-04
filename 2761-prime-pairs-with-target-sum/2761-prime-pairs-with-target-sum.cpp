const int  n=1000001;
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
    vector<vector<int>> findPrimePairs(int n) {
        seive();
        int l=2;
        int r=n-2;
        vector<vector<int>> b;
        while(l<=r)
         {
            while(l <= r && !a[l]) l++;
            while(l <= r && !a[r]) r--;
                if(l+r==n)
                {
                    b.push_back({l,r});
                    l++;
                    r--;
                }
                else if(l+r<n)
                {
                    l++;
                } 
                else
                {
                    r--;
                }   
    
         }
         return b;
    }

};