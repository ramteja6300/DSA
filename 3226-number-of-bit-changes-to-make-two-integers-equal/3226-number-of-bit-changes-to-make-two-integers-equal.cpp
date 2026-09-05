class Solution {
public:
    int minChanges(int n, int k) {
        if ((n | k) != n) return -1;

        int x = n ^ k;
        int ans = 0;

        while (x) {
            ans += x & 1;
            x >>= 1;
        }

        return ans;
        
    }
};