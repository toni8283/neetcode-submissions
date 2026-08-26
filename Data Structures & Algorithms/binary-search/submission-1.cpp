class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l = nums.size();
        int left = 0;
        int right =  l - 1;
        for (;right >= left;) {
            int mid = left + (right - left) / 2;
            if (target == nums[mid]) return mid;
            if (target > nums[mid]) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
        return -1;
        
    }
};
