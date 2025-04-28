class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int left=0,zero=0,maxlen=0,len=0;
        for(int right=0;right<nums.size();right++){
           if(nums[right]==0){
            zero++;
           }
           while(zero>k){
            if(nums[left]==0){
                zero--;
            }
            left++;
           }
           if(zero<=k){
            len=right-left+1;
            maxlen=max(len,maxlen);
            
           }
        }
        return maxlen;   
    }
};