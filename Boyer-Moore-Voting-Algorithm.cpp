class Solution {
public:
    int majorityElement(vector<int>& nums) {
        //Boyer moore voting algorithm
        int cnt=1;
        int maj=nums[0];
        for(int i=1;i<nums.size();i++){
            if(cnt==0){
                maj=nums[i];
                cnt=1;
            }
            else if(nums[i]==maj){
                cnt++;
            }
            else{
                cnt--;
            }
        }
        return maj;
    }
};

//majority element 2


class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int cnt1 = 0, cnt2 = 0;
        int cand1 = 0, cand2 = 1; // different initial values

        // First pass: Find candidates
        for (int num : nums) {
            if (num == cand1) {
                cnt1++;
            }
            else if (num == cand2) {
                cnt2++;
            }
            else if (cnt1 == 0) {
                cand1 = num;
                cnt1 = 1;
            }
            else if (cnt2 == 0) {
                cand2 = num;
                cnt2 = 1;
            }
            else {
                cnt1--;
                cnt2--;
            }
        }

        // Second pass: Verify candidates
        cnt1 = cnt2 = 0;
        for (int num : nums) {
            if (num == cand1) cnt1++;
            else if (num == cand2) cnt2++;
        }

        vector<int> ans;
        int n = nums.size();

        if (cnt1 > n / 3) ans.push_back(cand1);
        if (cnt2 > n / 3) ans.push_back(cand2);

        return ans;
    }
};
