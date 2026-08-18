class Solution {
public:
    int lengthOfLongestSubstring(string s) {
    
        unordered_set<char> ch;
        int r_index = 0;
        int inc = 0;
        for (int i = 0; i < s.length(); i++) {
            while (ch.count(s[i])) {
                ch.erase(s[r_index]);
                r_index++;
            }
            

            ch.insert(s[i]);

            inc = max(inc, i - r_index + 1);
            
        }
        return inc;
        
    }
};
