class Solution {
public:
    int minOperations(vector<int>& nums) {
        int ans = 0;
        
        for (int i = nums.size() - 2; i >= 0; i--) {
            
            if (nums[i] <= nums[i + 1])
                continue;

            int x = nums[i];
            int spf = x;

            // Find smallest prime factor
            for (int j = 2; j * j <= x; j++) {
                if (x % j == 0) {
                    spf = j;
                    break;
                }
            }

            // x is prime -> greatest proper divisor is 1
            // x / 1 = x, so it cannot be reduced
            if (spf == x)
                return -1;

            // One operation changes x to its smallest prime factor
            nums[i] = spf;
            ans++;

            // Still violates non-decreasing condition
            if (nums[i] > nums[i + 1])
                return -1;
        }

        return ans;
    }
};