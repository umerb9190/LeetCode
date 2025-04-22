class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        string s1=s;
        int size=s.size();
        for(int i=0;i<size;i++){
            int temp=indices[i];
            s1[temp]=s[i];
        }
        return s1;
    }
};