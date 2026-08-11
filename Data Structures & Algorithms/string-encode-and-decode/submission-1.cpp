class Solution {
public:

    string encode(vector<string>& strs) {
        string s = "";
        for (auto n : strs) {
            s += to_string(n.length()) + "@" + n;
        }
        return s;

    }

    vector<string> decode(string s) {
        vector<string> result;
        int i = 0;
        while (i < s.length()) {

            int j = i;
            while (s[j] != '@') {
                j++;
            }

            int len = stoi(s.substr(i, j - i));

            string str = s.substr(j + 1, len);
            result.push_back(str);

            i = j + len + 1;
        }

        return result;



    }
};
