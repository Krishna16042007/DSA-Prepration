class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 0) {
                nums.erase(nums.begin() + i);
                i--;                    // Important: check the shifted element
            }
        }

        while (nums.size() < n) {
            nums.push_back(0);
        }
    }
};
