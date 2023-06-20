// Q8.** You have a set of integers s, which originally contains all the numbers from 1 to n. Unfortunately, due to some error, one of the numbers in s got duplicated to another number in the set, which results in repetition of one number and loss of another number.

// You are given an integer array nums representing the data status of this set after the error.

// Find the number that occurs twice and the number that is missing and return them in the form of an array.

// **Example 1:**
// Input: nums = [1,2,2,4]
// Output: [2,3]



#include <iostream>
#include <vector>
#include <unordered_set>

std::vector<int> findErrorNums(std::vector<int>& nums) {
    std::vector<int> result(2, 0);
    std::unordered_set<int> numSet;
    int n = nums.size();
    int sum = (n * (n + 1)) / 2; // Sum of numbers from 1 to n

    for (int num : nums) {
        if (numSet.count(num) == 0) {
            numSet.insert(num);
            sum -= num;
        } else {
            result[0] = num;
        }
    }

    result[1] = sum;

    return result;
}

int main() {
    std::vector<int> nums = {1, 2, 2, 4};
    std::vector<int> result = findErrorNums(nums);

    std::cout << "Missing number: " << result[1] << std::endl;
    std::cout << "Duplicate number: " << result[0] << std::endl;

    return 0;
}
