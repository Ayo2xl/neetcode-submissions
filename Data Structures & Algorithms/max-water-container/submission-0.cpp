class Solution {
public:
    int maxArea(vector<int>& heights) {
        int left = 0;
        int right = heights.size() - 1;
        int h;
        int max_area = 0;
        int width;
        
        while(left < right) {
            h = min(heights[left], heights[right]);
            width = right - left;
            max_area = max(max_area, width * h);

            if(heights[left] < heights[right]) {
                left++;
            } else {
                right--;
            }
        }
        return max_area;
    }
};
