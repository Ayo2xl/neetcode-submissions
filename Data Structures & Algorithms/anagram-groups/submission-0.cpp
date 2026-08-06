class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) { 
        unordered_map < string , vector<string>> result;
        for(const auto & s : strs) {
            string sortedS = s;
            sort(sortedS.begin(), sortedS.end());
            result[sortedS].push_back(s);
        }

        vector < vector<string>> results;
        for(const auto& group : result) {
            results.push_back(group.second);
        }
        
        return results;
    }

};
