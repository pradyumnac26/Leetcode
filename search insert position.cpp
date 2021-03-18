class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
    int left = 0;
    int right = nums.size()-1;
    int middle = 0;

    while (left <= right) {
        middle = (left + right) / 2;

        if (target == nums[middle]) {
            return middle;
        } else if (target < nums[middle]) {
            right = middle - 1;
        } else {
            left = middle + 1;
        }
    }

    return left;
}

};
