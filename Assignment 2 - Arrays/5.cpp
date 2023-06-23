#include <iostream>
#include <vector>
#include <algorithm>

int maximumProduct(std::vector<int>& nums) {
    int n = nums.size();
    
    // Sort the array in ascending order
    std::sort(nums.begin(), nums.end());
    
    // Return the maximum of two cases:
    // 1. Product of the three largest elements
    // 2. Product of the two smallest elements (if any) and the largest element
    return std::max(nums[n - 1] * nums[n - 2] * nums[n - 3], nums[0] * nums[1] * nums[n - 1]);
}

int main() {
    std::vector<int> nums = {1, 2, 3};
    int maxProduct = maximumProduct(nums);
    std::cout << "Maximum product: " << maxProduct << std::endl;
    return 0;
}
