class Solution {
public:
    string minWindow(string s, string t) {

        if (s.empty() || t.empty() || t.size() > s.size()) {
            return "";
        }
        vector<int> need(128, 0);
        vector<int> window(128, 0);

        for (char c : t) {
            need[c]++;
        }
        int required = 0;
        for (int count : need) {
            if (count > 0) {
                required++;
            }
        }

        int satisfied = 0;
        int left = 0;
        int bestStart = 0;
        int bestLength = INT_MAX;

        for (int right = 0; right < s.length(); right++) {
            char rightChar = s[right];
            window[rightChar]++;

            if (need[rightChar] > 0 && window[rightChar] == need[rightChar]) {
                satisfied++;
            }

            while (satisfied == required) {
                int currLength = right - left + 1;

                if (currLength < bestLength) {
                    bestLength = currLength;
                    bestStart = left;
                }
                char leftChar = s[left];
                window[leftChar]--;

                if (need[leftChar] > 0 && window[leftChar] < need[leftChar]) {
                    satisfied--;
                }
                left++;
            }

        }

        if (bestLength == INT_MAX) {
            return "";
        }

        return s.substr(bestStart, bestLength);
    }
    
};
