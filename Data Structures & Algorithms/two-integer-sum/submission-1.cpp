class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        unordered_map<int, int> arrmap;

        for (int i = 0; i < nums.size(); i++) {
            int reqno = target - nums[i];
            if (arrmap.count(reqno)) {
                return {arrmap[reqno], i};
            }

            arrmap[nums[i]] = i;
        }
        
        return {};
    }
};
