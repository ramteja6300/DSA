class Solution {
public:
    int xorOperation(int n, int start) {
        vector<int>a(n);
        for(int i=0;i<n;i++)
        {
            a[i]=start+(2*i);
        }
        int r=a[0];
        for(int i=1;i<n;i++)
        {
            r=r^a[i];
        }
        return r;

        
        
    }
};