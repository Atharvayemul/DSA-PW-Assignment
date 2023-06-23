#include <iostream>
#include <vector>

bool isMonotonic(std::vector<int>& nums) {
    bool increasing = true;
    bool decreasing = true;

    for (int i = 1; i < nums.size(); i++) {
        if (nums[i] < nums[i - 1]) {
            increasing = false;
        }
        if (nums[i] > nums[i - 1]) {
            decreasing = false;
        }
    }

    return increasing || decreasing;
}

int main() {
    std::vector<int> nums = {1, 2, 2, 3};
    bool isMonotonicArray = isMonotonic(nums);
    std::cout << std::boolalpha << isMonotonicArray << std::endl;

    return 0;
}
