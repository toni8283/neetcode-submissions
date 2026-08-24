class Solution {
public:
    bool isValid(string s) {
        int l = s.length();
        if (l % 2 != 0) {
            return false;
        }
        stack<char> st;

        for (char c : s) {

            if (c == '(' || c == '{' || c == '[') {
                st.push(c);
            } else {
                if (st.empty()) return false;

                char top = st.top();
                if (c - top == 1 || c - top == 2) {
                    st.pop();
                } else return false;
            }
            

        }
        return st.empty();


        
    }
};
