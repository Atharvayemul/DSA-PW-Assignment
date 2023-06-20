// Q7.** Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the nonzero elements.

// Note that you must do this in-place without making a copy of the array.

// **Example 1:**
// Input: nums = [0,1,0,3,12]
// Output: [1,3,12,0,0]



#include <iostream>
#include <vector>

void moveZerosToEnd(std::vector<int>& nums) {
    int n = nums.size();
    int nonZeroIndex = 0;

    // Move all nonzero elements to the front of the array
    for (int i = 0; i < n; i++) {
        if (nums[i] != 0) {
            nums[nonZeroIndex++] = nums[i];
        }
    }

    // Fill the remaining elements with zeros
    while (nonZeroIndex < n) {
        nums[nonZeroIndex++] = 0;
    }
}

int main() {
    std::vector<int> nums = {0, 1, 0, 3, 12};

    std::cout << "Input: ";
    for (int num : nums) {
        std::cout << num << " ";
    }

    moveZerosToEnd(nums);

    std::cout << "\nOutput: ";
    for (int num : nums) {
        std::cout << num << " ";
    }

    return 0;
}
