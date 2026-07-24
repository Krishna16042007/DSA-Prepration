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
