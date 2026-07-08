class Solution {
public:
bool isAnagram(string s, string t){
  if(s.size()!=t.size())return false;
  unordered_map <char,int> mp;
   for(auto ele: s){
      mp[ele]++;
   }
   for(auto ele: t){
      mp[ele]--;
   }
   for(auto pairs:mp){
      if(pairs.second!=0) return false;
   }
   return true;

}
vector<vector<string>> groupAnagrams(vector<string>& v) {
        vector<vector<string>> ans;
        
        for(int i=0;i<v.size();i++){vector<string> temp;
          temp.push_back(v[i]);
          for(int j=i+1;j<v.size();){
            
            if(isAnagram(v[i],v[j])){
                  temp.push_back(v[j]);
                  v.erase(v.begin()+j);
            }else{
              j++;
            }
 
          }
          ans.push_back(temp);
        }
        return ans;}
};
