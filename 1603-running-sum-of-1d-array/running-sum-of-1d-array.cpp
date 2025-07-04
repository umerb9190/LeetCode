class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int j=0;
        for(int i=1;i<nums.size();i++,j++){
            nums[i]=nums[i]+nums[j];
        }
        return nums;
    }
};