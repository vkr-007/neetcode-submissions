class Solution {
   public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st(nums.begin(), nums.end());
        int ans = 0;
        for (auto num : st) {
            int n = num;
            if (!st.count(n - 1)) {
                int l = 1;
                while (st.count(l + n)) {
                    l++;
                }
                ans = max(ans, l);
            }
        }

        return ans;
    }
};
