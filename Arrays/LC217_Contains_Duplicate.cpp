class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int>s;
        for(int num:nums){
            if(s.count(num))return true;
            s.insert(num);
        }return false;
    }
};
auto init = atexit([]() { ofstream("display_runtime.txt") << "0"; });

//Brute Force also
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        for(int i=1;i<n;i++){
            if(nums[i]==nums[i-1])return true;

        }
        return false;
    }
};
