class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<long long> st;

        for (const string& num : tokens) {
            if (num == "+" || num == "*" || num == "-" || num == "/") {
                long long b = st.top(); //second operand
                st.pop();
                long long a = st.top(); //first operand
                st.pop();

                if (num == "+") st.push(a + b);
                else if (num == "-") st.push(a - b);
                else if (num == "*") st.push(a * b);
                else if (num == "/") st.push (a / b);
                
            } else {
                st.push(stoi(num));
            }
        }

        return st.top();
        
    }
};
