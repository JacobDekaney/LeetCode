class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int count;
        vector<int> res;
        for (int i : nums) {
            count = 0;
            for (int j : nums) {
                if (j < i) count++;
            }
            res.push_back(count);
        }
        return res;
    }
};