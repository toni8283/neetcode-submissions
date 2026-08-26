class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        int l = position.size();
        if (l == 0) {
            return 0;
        }

        vector<pair<int, int>> cars(l);
        stack<double> st;

        for (int i = 0; i < l; i++) {
            cars[i] = {position[i], speed[i]};
        }

        //sorting the pairs according to closest car to target.
        sort(cars.begin(), cars.end(), [](const pair<int, int>& a, const pair<int, int>& b){
            return a.first > b.first;
        });

        

        for (int i = 0; i < l; i++) {
            double time = (double)(target - cars[i].first) / cars[i].second;

            if (!st.empty() && time <= st.top()) {
                continue;
            }

            st.push(time);
        }
        return st.size();
    }
};
