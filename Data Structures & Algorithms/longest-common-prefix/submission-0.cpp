class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(), strs.end());

        string first = strs.front();  // smallest string
        string last  = strs.back();   // largest string
        string prefix = "";

        // Compare only first and last
        for (int i = 0; i < first.size(); i++) {
            if (first[i] == last[i])
                prefix += first[i];
            else
                break;
        }

        return prefix;
    }
};