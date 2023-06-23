#include <vector>
#include <algorithm>

int minimumScore(std::vector<int>& nums, int k) {
    int minNum = nums[0];
    int maxNum = nums[0];

    for (int i = 1; i < nums.size(); i++) {
        minNum = std::min(minNum, nums[i] - k);
        maxNum = std::max(maxNum, nums[i] + k);
    }

    return maxNum - minNum;
}
std::vector<int> nums = {1};
int k = 0;
int score = minimumScore(nums, k);
