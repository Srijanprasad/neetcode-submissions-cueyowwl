class Solution {
public:
    void reverseString(vector<char>& s) {
        reverse(s.end(),s.begin());
        reverse(s.begin(),s.end());
        // return s;
    }
};