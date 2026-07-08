class Solution {
   public:
  
    vector<vector<string>> groupAnagrams(vector<string>& v) {
        vector<vector<string>> ans;
        unordered_map <string, vector<string>> hash;
        for(auto s:v){
          vector<int> freq(26,0);
          for(auto ch:s){
              freq[ch-'a']++;
          }
          string key="";
          for(int i=0;i<26;i++){
            key+='#'+freq[i];
          }
          
          
          hash[key].push_back(s);
        }
        for(auto &pairs:hash){
          ans.push_back(pairs.second);
        }
        return ans;
    }
};
