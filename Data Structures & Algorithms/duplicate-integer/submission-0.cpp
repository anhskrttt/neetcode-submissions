class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        set<int> S(nums.begin(), nums.end());
        if(S.size() == nums.size()) return 0;
        else return 1;
    }
};