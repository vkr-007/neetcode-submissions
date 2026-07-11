class Solution {
   public:
    string encode(vector<string>& strs) {
        string ans = "";
        for (int i = 0; i < strs.size(); i++) {
            ans += to_string(strs[i].size()) + "#"+ strs[i];
        }
        return ans;
        ;
    }

    vector<string> decode(string s) {
        vector<string> ans;
        int i=0;
        while(i<s.size()){
            string l="";
            while(s[i]!='#'){
                l+=s[i];
                i++;
            }
            int n = stoi(l);
            i++;
            string temp= s.substr(i,n);
            ans.push_back(temp);
            i+=n;
        }
        
        
        return ans;
    }
};
