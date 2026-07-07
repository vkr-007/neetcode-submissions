class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       vector<int> ans(2);
       unordered_map<int,int> mp;
       for(int i=0;i<nums.size();i++){
          int f=target-nums[i];
          if(mp.find(f)!=mp.end()){
            ans[0]=mp[f];
            ans[1]=i;
            return ans;
          }else{
            mp[nums[i]]=i;
          }
       }
       
       return ans;
    }
};

