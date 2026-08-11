class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> count;

        for (auto n : nums){
            count[n]++;
        }
        
        vector<vector<int>> bucket(nums.size() + 1);

        for (auto p : count) {
            int num = p.first;
            int freq = p.second;
            bucket[freq].push_back(num);

        }

        vector<int> result;
        for (int i = bucket.size() - 1; i >= 0; i--) {
            for (int n : bucket[i]) {
                result.push_back(n);
                if (result.size() == k) return result;
            }
        }

        return result;
    }
};
