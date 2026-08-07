class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) return false;

        unordered_map<char, int> count_map;
        
        for (char c : s) {
            count_map[c]++;
        }

        for (char c : t) {
            if (count_map[c] == 0) {
                return false;
            }
            count_map[c]--;
        }
        return true;
    }
};
