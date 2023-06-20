
// *Q6.** Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.

// **Example 1:**
// Input: nums = [1,2,3,1]

// Output: true




#include <iostream>
#include <vector>
#include <unordered_set>

bool containsDuplicate(std::vector<int>& nums) {
    std::unordered_set<int> numSet;
    for (int num : nums) {
        if (numSet.count(num) > 0) {
            return true;  // Found a duplicate
        }
        numSet.insert(num);
    }
    return false;  // No duplicates found
}

int main() {
    std::vector<int> nums = {1, 2, 3, 1};
    bool hasDuplicates = containsDuplicate(nums);
    std::cout << std::boolalpha << hasDuplicates << std::endl;
    return 0;
}
