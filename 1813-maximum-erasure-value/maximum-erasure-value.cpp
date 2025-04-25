class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        unordered_set<int> unique;
        int curr=0,ans=0;
        for(int i=0,j=0;j<nums.size();j++){
            while(unique.find(nums[j])!=unique.end()){
                unique.erase(nums[i]);
                curr-=nums[i];
                i++;
            }
            unique.insert(nums[j]);
            curr+=nums[j];
            ans=max(ans,curr);
        }
        return ans;
    }
};