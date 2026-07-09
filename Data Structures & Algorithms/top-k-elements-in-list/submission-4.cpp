class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        for(auto ele: nums){
            mp[ele]++;
        }
    vector<vector<int>> buckets(nums.size()+1);
    for(auto pairs:mp){
        buckets[pairs.second].push_back(pairs.first);
    }
    vector<int> ans;
    for(int i=nums.size();i>=1;i--){
      
            for(auto x:buckets[i]){
                if(ans.size()==k) break;
                ans.push_back(x);
            }
        }
    
   
   return ans;
}};
