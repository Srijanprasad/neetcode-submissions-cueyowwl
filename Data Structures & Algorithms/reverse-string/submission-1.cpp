class Solution {
public:
    void reverseString(vector<char>& s) {
        // vector<char> ans;
        // for(int i = s.size();i<s.size();i++){
        int l = 0, r =s.size()-1;
        while(l>r){
            swap(s[l++], s[r--]);
        }


    }
};