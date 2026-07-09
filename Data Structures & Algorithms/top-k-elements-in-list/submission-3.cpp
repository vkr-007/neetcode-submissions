class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        for(auto ele: nums){
            mp[ele]++;
        }
   
    priority_queue <pair<int,int>> v;
    for(auto pair: mp){
        v.push({pair.second,pair.first});
    }
  vector<int> ans;
  while(k--){
    ans.push_back(v.top().second);
    v.pop();
  }
   return ans;
}};
