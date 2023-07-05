class Solution {
public:
    void sortColors(vector<int>& nums) {
         int low = 0; // Pointer for 0 (red)
        int mid = 0; // Pointer for 1 (white)
        int high = nums.size() - 1; // Pointer for 2 (blue)
        
        while (mid <= high) {
            if (nums[mid] == 0) { // If the current element is red
                swap(nums[low], nums[mid]);
                low++;
                mid++;
            } else if (nums[mid] == 1) { // If the current element is white
                mid++;
            } else { // If the current element is blue
                swap(nums[mid], nums[high]);
                high--;
            }
        }
    }
};