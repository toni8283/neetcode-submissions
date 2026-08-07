class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> arrmap;
        arrmap.reserve(nums.size());
        for (int i = 0; i < nums.size(); i++) {
            int reqno = target - nums[i];

            auto it = arrmap.find(reqno);
            if (it != arrmap.end()) {
                return {it->second, i};
            }
            arrmap[nums[i]] = i;
        }
        
        return {};
    }
};
