class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        array<int, 26> arr{};
        array<int, 26> window{};
        int i = 0;
        while (i < s1.length()) {
            int index = s1[i] - 'a';
            arr[index]++;
            i++;
        }
        int win_s = s1.length();
        int left = 0;
        for (int right = 0; right < s2.length(); right++) {
            window[s2[right] - 'a']++;
            if (right - left + 1 == win_s && arr == window) {
                    return true;
            }
            if (right - left + 1 == win_s) {
                window[s2[left] - 'a']--;
                left++;
            }
        }

        return false;
        
    }
};
