class Solution {
public:
 struct State {
        long long score = 0;
        vector<int> ids;
    };

    State better(const State& a, const State& b) {
        if (a.score != b.score)
            return a.score > b.score ? a : b;
        return a.ids < b.ids ? a : b;
    }
    vector<int> maximumWeight(vector<vector<int>>& intervals) {
        int n = intervals.size();

        vector<array<long long, 4>> a;

        for (int i = 0; i < n; i++) {
            a.push_back({intervals[i][1], intervals[i][0],
                         intervals[i][2], i});
        }

        sort(a.begin(), a.end());

        vector<long long> ends(n);
        for (int i = 0; i < n; i++)
            ends[i] = a[i][0];

        vector<int> prev(n);

        for (int i = 0; i < n; i++) {
            prev[i] = lower_bound(
                ends.begin(),
                ends.begin() + i,
                a[i][1]
            ) - ends.begin();
        }

        vector<array<State, 5>> dp(n + 1);

        for (int i = 1; i <= n; i++) {
            for (int k = 1; k <= 4; k++) {
                State skip = dp[i - 1][k];

                State take = dp[prev[i - 1]][k - 1];
                take.score += a[i - 1][2];

                int id = a[i - 1][3];

                auto it = lower_bound(
                    take.ids.begin(),
                    take.ids.end(),
                    id
                );

                take.ids.insert(it, id);

                dp[i][k] = better(skip, take);
            }
        }

        return dp[n][4].ids;

    }
};