class Solution {
   public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> pre(nums.size());
        vector<int> suf(nums.size());
        int temp = 1;
        for (int i = 0; i < nums.size(); i++) {
            pre[i] = temp;
            temp *= nums[i];
        }
        temp = 1;
        for (int i = nums.size() - 1; i >= 0; i--) {
            suf[i] = temp;
            temp *= nums[i];
        }
        vector<int> ans(nums.size());
        for (int i = 0; i < nums.size(); i++) {
            ans[i] = pre[i] * suf[i];
        }
        return ans;
    }
};
