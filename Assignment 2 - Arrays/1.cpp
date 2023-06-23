#include <iostream>
#include <vector>
#include <algorithm>

int arrayPairSum(std::vector<int>& nums) {
    // Sort the array in ascending order
    std::sort(nums.begin(), nums.end());

    int sum = 0;
    // Iterate over the sorted array, taking the minimum element from each pair
    for (int i = 0; i < nums.size(); i += 2) {
        sum += nums[i];
    }

    return sum;
}

int main() {
    std::vector<int> nums = {1, 4, 3, 2};
    int result = arrayPairSum(nums);
    std::cout << "Maximized sum: " << result << std::endl;

    return 0;
}
