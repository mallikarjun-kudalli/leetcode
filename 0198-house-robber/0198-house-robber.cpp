class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();

        if (n == 0) {
            return 0;
        }
        if (n == 1) {
            return nums[0];
        }

        int secondLast = 0, last = nums[0];
        int ans;
        for (int i = 1; i < n; i++) {
            ans = max(nums[i] + secondLast, last);
            secondLast = last;
            last = ans;
        }
        return ans;
    }
};