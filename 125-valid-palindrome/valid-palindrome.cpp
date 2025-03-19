class Solution {
public:
    bool isPalindrome(string s) {
        string updated;
        for(int i=0;i<s.length();i++){
            if(isalnum(s[i])){
                updated+=tolower(s[i]);
            }
        }
        int left=0, right=updated.length()-1;
        while(left<right){
            if(updated[left]!=updated[right]){
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
};