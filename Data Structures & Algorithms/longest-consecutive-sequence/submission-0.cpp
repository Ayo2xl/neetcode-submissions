class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        int answer = 0;                                          // fixed: was uninitialized
    unordered_set<int> numset(nums.begin(), nums.end());     // fixed: build set from vector properly

    for (int num : numset) {                                  // fixed: range-based loop gives actual values, not index i
        if (numset.count(num - 1) == 0) {                     // fixed: check num-1 (current value), and == 0 means "not found" = start
            int length = 1;
            int current = num;

            while (numset.count(current + 1)) {               // walk forward while next number exists
                current++;
                length++;
            }

            answer = max(answer, length);                     // track the longest run found
        }
    }

    return answer;
    }
};
