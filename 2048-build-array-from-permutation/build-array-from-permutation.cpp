class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        vector<int>ans;
        ans=nums;
        for (int i = 0; i < nums.size(); i++) {
            nums[i] = ans[ans[i]];
        }
        return nums;
    }
};