#include <iostream>
#include <unordered_map>
#include <vector>

int findLHS(std::vector<int>& nums) {
    std::unordered_map<int, int> freq;
    int maxLength = 0;

    // Count the frequency of each number in the array
    for (int num : nums) {
        freq[num]++;
    }

    // Check each number and its adjacent number to find harmonious subsequence
    for (const auto& pair : freq) {
        int num = pair.first;
        int count = pair.second;

        // Check if both num and num+1 exist in the frequency map
        if (freq.count(num + 1) > 0) {
            maxLength = std::max(maxLength, count + freq[num + 1]);
        }
    }

    return maxLength;
}

int main() {
    std::vector<int> nums = {1, 3, 2, 2, 5, 2, 3, 7};
    int longestLength = findLHS(nums);
    std::cout << "Longest harmonious subsequence length: " << longestLength << std::endl;

    return 0;
}
