class Solution {
public:
    int countSubarrays(vector<int>& nums) {
        int sum = 0, value, count = 0;
        for (int i = 1; i+1 < nums.size(); i++) {
            value = nums[i-1] + nums[i+1];
            if (nums[i]/2 == value) {
                count++;
            }
            
        }
        return count;
    }
};