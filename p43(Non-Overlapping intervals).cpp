class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        int n = intervals.size();
        if (n == 0)
            return 0;

        sort(intervals.begin(), intervals.end());

        vector<vector<int>> ans;
        ans.push_back(intervals[0]);

        for (int i = 1; i < n; i++) {
            if (intervals[i][0] >= ans.back()[1]) {
                ans.push_back(intervals[i]);
            } else if (intervals[i][1] < ans.back()[1]) {
                ans.back() = intervals[i];
            }
        }

        return n - ans.size();
    }
};