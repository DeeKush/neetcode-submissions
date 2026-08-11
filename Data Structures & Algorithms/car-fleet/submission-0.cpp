class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        int n = position.size();
        if(n==1)return 1;
        vector <pair<int, int>> cars;
        for(int i=0;i<n;i++){
            cars.emplace_back(position[i], speed[i]);
        }
        sort(cars.begin(), cars.end());
        vector<double> time;
        for(int i=0;i<n;i++){
            time.push_back((double)(target - cars[i].first)/cars[i].second);
        }
        // int fleets = 0;
        // for(int i=n-2;i>=0;i--){
        //     if(time[i]>time[i+1])fleets++;
        // }
        stack<double> st;

        for(int i = n-1; i >= 0; i--) {
            if(st.empty() || time[i] > st.top()) {
                st.push(time[i]);
            }
        }

        return st.size();
        // return fleets+1;

    }
};