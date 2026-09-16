class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> groups;

        // Group words by their sorted version
        for (const string& s : strs) {
            string key = s;
            sort(key.begin(), key.end());
            groups[key].push_back(s);
        }

        // Collect all groups into the final result
        vector<vector<string>> result;
        result.reserve(groups.size());
        for (auto& pair : groups) {
            result.push_back(move(pair.second));
        }

        return result;
    }
};
