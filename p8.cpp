class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end(), [](const vector<int>& a, const vector<int>& b) {
            return a[0] < b[0]; // Sort intervals based on start time
        });
        
        vector<vector<int>> merged;
        
        for (const vector<int>& interval : intervals) {
            if (merged.empty() || interval[0] > merged.back()[1]) {
                // If result list is empty or current interval does not overlap
                merged.push_back(interval);
            } else {
                // If current interval overlaps, update the end time
                merged.back()[1] = max(merged.back()[1], interval[1]);
            }
        }
        
        return merged;
        
    }
};