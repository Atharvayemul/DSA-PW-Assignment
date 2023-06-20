
// Q1.Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
// You may assume that each input would have exactly one solution, and you may not use the same element twice.
// You can return the answer in any order.
// **Example:**
// Input: nums = [2,7,11,15], target = 9
// Output0 [0,1]
// **Explanation:** Because nums[0] + nums[1] == 9, we return [0, 1]




#include <iostream>
#include <unordered_map>
#include <vector>

std::vector<int> twoSum(std::vector<int> &number, int target_number)
{
    std::unordered_map<int, int> numMap;
    std::vector<int> result;

    for (int i = 0; i < number.size(); i++)
    {
        int complement = target_number - number[i];
        if (numMap.find(complement) != numMap.end())
        {
            result.push_back(numMap[complement]);
            result.push_back(i);
            break;
        }
        numMap[number[i]] = i;
    }

    return result;
}

int main()
{
    std::vector<int> number = {2, 7, 11, 15};
    int target_number = 9;
    std::vector<int> indices = twoSum(number, target_number);

    if (indices.size() == 2)
    {
        std::cout << "Indices: [" << indices[0] << ", " << indices[1] << "]\n";
    }
    else
    {
        std::cout << "No two elements in the array add up to the target_number.\n";
    }

    return 0;
}
