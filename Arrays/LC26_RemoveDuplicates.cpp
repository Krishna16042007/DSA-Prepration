class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();

        if (n == 0) return 0;
        int index=0;//thats our unique index because first value always or must be unique 
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=nums[index]){
                index++;
                nums[index]=nums[i];
            }
        }
        return index+1;




    }
};
