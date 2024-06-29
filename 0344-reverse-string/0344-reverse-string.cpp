class Solution {
public:
    void reverseString(vector<char>& s) {
       vector<char> reverse1;
       int size = s.size();
       for (int i = 0; i < s.size(); i++) {
       reverse1.push_back(s[size-1]);
       size = size - 1;
        }
       for (int i = 0; i < reverse1.size(); i++) {
          s[i] = reverse1[i];
          }
    }
};