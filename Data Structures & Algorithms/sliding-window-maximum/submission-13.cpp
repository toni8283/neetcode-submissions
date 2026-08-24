class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        deque<int> curr;
        vector<int> result;
        for (int i = 0; i < nums.size(); i++) {
            if (!curr.empty() && curr.front() <=  i - k) {
                curr.pop_front();

            }
            while (!curr.empty() && nums[i] >= nums[curr.back()]) {
                curr.pop_back();
            }
            curr.push_back(i);

            if (i >= k - 1) {
                result.push_back(nums[curr.front()]);
            }
              
        }

        return result;
    }
};
