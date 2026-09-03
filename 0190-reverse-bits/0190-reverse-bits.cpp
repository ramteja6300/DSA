class Solution {
public:
    int reverseBits(int n) {
         string bin=bitset<32>(n).to_string();
        reverse(bin.begin(),bin.end());
        bitset<32>b (bin);
        return b.to_ulong();
        
        
    }
};