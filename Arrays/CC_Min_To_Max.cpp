class Solution {
public:
    int countNonMinimum(vector<int>& nums) {
        // write your code here 
    int min;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        min=nums[0];
        int res=0;
        for(int j=1;j<n;j++){
            if(nums[j]>min){
                nums[j]=min;
                res++;
            }
        }
        return res;
    }
};
