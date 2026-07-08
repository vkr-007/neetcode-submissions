class Solution {
   public:
  
    vector<vector<string>> groupAnagrams(vector<string>& v) {
        vector<vector<string>> ans;
        unordered_map <string, vector<string>> m;
        for(auto s:v){
          string key = s;
          sort(key.begin(),key.end());
          m[key].push_back(s);
        }
        for(auto &pairs:m){
          ans.push_back(pairs.second);
        }
        return ans;
    }
};
