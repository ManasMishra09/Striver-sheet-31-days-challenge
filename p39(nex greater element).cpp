class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
                std::stack<int> stack;
        std::unordered_map<int, int> next_greater;
        std::vector<int> result;

        for (int i = nums2.size() - 1; i >= 0; --i) {
            while (!stack.empty() && stack.top() < nums2[i]) {
                stack.pop();
            }

            if (!stack.empty()) {
                next_greater[nums2[i]] = stack.top();
            } else {
                next_greater[nums2[i]] = -1;
            }

            stack.push(nums2[i]);
        }

        for (int num : nums1) {
            result.push_back(next_greater[num]);
        }

        return result;
    }
};