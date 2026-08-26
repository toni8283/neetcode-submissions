class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int l = temperatures.size();
        vector<int> result(l,0);
        stack<int> st;
        for (int i = 0; i < l; i++) {
            while (!st.empty() && temperatures[i] > temperatures[st.top()]) {
                int prev_day = st.top();
                st.pop();
                result[prev_day] = i - prev_day;
            }
            st.push(i);
        }
        return result;
    }
};
