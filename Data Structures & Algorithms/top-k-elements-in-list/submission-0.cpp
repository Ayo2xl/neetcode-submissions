class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> result;
        for(const auto& n : nums) {
            result[n]++;
        }

        vector<pair<int, int>> count;
        for(const auto& p : result) {
            count.push_back({p.second, p.first});
        }
        sort(count.rbegin(), count.rend());

        vector<int> res;
        for(int i = 0; i < k; i++) {
            res.push_back(count[i].second);
        }
        return res;
    }
};
