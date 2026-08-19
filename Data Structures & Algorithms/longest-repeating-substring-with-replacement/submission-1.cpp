class Solution {
public:
    int characterReplacement(string s, int k) {
        array<int, 26> arr{};
        int left = 0;
        int max_freq = 0;
        int max_length = 0;
        for (int i = 0; i < s.length(); i++) {
            int index = s[i] - 'A';
            int win_l = i - left + 1;
            arr[index]++;
            max_freq = max(max_freq, arr[index]);
            
            if (win_l - max_freq <= k) {
                max_length = max(max_length, win_l);
            } else {
                while ((i - left + 1) - max_freq > k) {
                    arr[s[left] - 'A']--;
                    left++;
                }
            }
        }
        return max_length;
        
    }
};
