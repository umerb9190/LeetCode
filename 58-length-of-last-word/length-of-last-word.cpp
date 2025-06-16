class Solution {
public:
    int lengthOfLastWord(string s) {
        int size=s.size()-1;
        int count=0;
        while(size>=0){
            if(s[size]!=' '){
                count++;
                
            }
            else{
                if(count>0){
                    return count;
                }
            }
            size--;
        }
        return count;
    }
};