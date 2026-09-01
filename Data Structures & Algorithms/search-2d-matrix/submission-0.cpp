class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();

        int low = 0;
        int high = (m * n) - 1;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            // Map the 1D index 'mid' back to 2D row and column
            int row = mid / n;
            int col = mid % n;
            int mid_val = matrix[row][col];

            if (mid_val == target) {
                return true;
            } else if (mid_val < target) {
                low = mid + 1; // Target is in the right half
            } else {
                high = mid - 1; // Target is in the left half
            }
        }

        return false;
    }
};
