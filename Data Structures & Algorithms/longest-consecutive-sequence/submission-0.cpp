class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        unordered_set<int> seq(nums.begin(), nums.end());
        int seq_length = 0;

        for (int num : nums) {
            if (seq.count(num-1) == 0) {
                int start_ele = num;
                int new_ele = num + 1;
                int streak = 1;
                while (seq.count(new_ele)) {
                    new_ele += 1;
                    streak += 1;
                }

                seq_length = max(seq_length, streak);
            }
        }
        return seq_length;
    }
};
