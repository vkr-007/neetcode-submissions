class Solution {
   public:
  
    vector<vector<string>> groupAnagrams(vector<string>& v) {
        vector<vector<string>> ans;
        map <vector<int>, vector<string>> hash;
        for(auto s:v){
          vector<int> freq(26,0);
          for(auto ch:s){
              freq[ch-'a']++;
          }
          
          
          hash[freq].push_back(s);
        }
        for(auto &pairs:hash){
          ans.push_back(pairs.second);
        }
        return ans;
    }
};
