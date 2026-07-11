class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int,int> f;
        for(auto n: nums){
            f[n]++;
        }
        for(auto n: f){
            if(n.second>1) return true;
        }
        return false;
    }
};