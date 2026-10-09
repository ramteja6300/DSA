class Solution {
public:
void combinations(vector<int> &candidates,int target,int n,int i,vector<int> seq,vector<vector<int>> &pairs)
{

        if (target == 0) {
            pairs.push_back(seq);
            return;
        }

        if (i == n)
            return;
    //pick condition
    if(target>=candidates[i])
    {
        seq.push_back(candidates[i]);
        combinations(candidates,target-candidates[i],n,i,seq,pairs);
        seq.pop_back();
    }
    //non pick condition
    
        combinations(candidates,target,n,i+1,seq,pairs);
}
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        int n=candidates.size();
        vector<int> seq;
        vector<vector<int>> pairs;
        combinations(candidates,target,n,0,seq,pairs);
        return pairs;

        
    }
};