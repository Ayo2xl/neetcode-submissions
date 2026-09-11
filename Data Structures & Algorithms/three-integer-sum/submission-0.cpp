class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int fp = 0;
        int sp = nums.size() / 2;
        int tp = nums.size() - 1;

        int arraytrip[3];
        vector<int> triplets;
        sort(nums.end(), nums.begin());
        while(fp < tp ) {
    if(nums[fp] + nums[sp] + nums[tp] > 0 ) 
            if(nums[fp] + nums[sp] + nums[tp] == 0) {
                arraytrip.push_back(nums[fp]);
                arraytrip.push_back(nums[sp]);
                arraytrip.push_back(nums[tp]);
            }
        }







    }
};
