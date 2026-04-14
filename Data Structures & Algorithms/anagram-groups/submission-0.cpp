class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> res;

        for(int i=0; i<strs.size(); i++){
            string storedString = strs[i];
            sort(storedString.begin(), storedString.end());
            res[storedString].push_back(strs[i]);
        }

        vector<vector<string>> result;
        for(auto it=res.begin(); it != res.end(); it++){
            result.push_back(it->second);
        }
        return result;
    }
};
