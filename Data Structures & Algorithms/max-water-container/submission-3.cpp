class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n = heights.size();
        int max_area = 0;
        int right = n - 1;
        int left = 0;
        

        while (left < right) {
            
            int curr_area = (right - left)*min(heights[left], heights[right]);
            max_area = max(max_area, curr_area);
            
            if (heights[left] > heights[right]) {
                right--;
            }
            else left++;
        }

        return max_area;

    }
};
