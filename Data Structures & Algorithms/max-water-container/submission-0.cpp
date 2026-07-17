class Solution {
   public:
    int maxArea(vector<int>& heights) {
        int i = 0;
        int j = heights.size() - 1;
        int ar = 0;
        while (i <= j) {
            ar = max(ar, (j - i) * min(heights[i], heights[j]));
            if (heights[i] > heights[j]) {
                j--;
            } else
                i++;
        }
        return ar;
    }
};
