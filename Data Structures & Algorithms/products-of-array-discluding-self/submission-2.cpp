class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int k = nums.size();
        vector<int> multiple(k);
       for(int i = 0; i < k; i++) {
            int product = 1;
            for (int j = 0; j < k; j++) {
                if(i != j) {
                    product *= nums[j];
                }
            }
            multiple[i] = product;
       }
       return multiple;
    }
};
