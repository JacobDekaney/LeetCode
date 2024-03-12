class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int> ind = {};
        int index = 0;
        for (string s : words) {
            for (char c : s) {
                if (c == x) {
                    ind.push_back(index);
                    break;
                }
            }
            index++;
        }
        return ind;
    }
};