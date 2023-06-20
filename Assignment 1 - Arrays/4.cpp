
//Q4.** You are given a large integer represented as an integer array digits, where each digits[i] is the ith digit of the integer. The digits are ordered from most significant to least significant in left-to-right order. The large integer does not contain any leading 0's.

// Increment the large integer by one and return the resulting array of digits.

// **Example 1:**
// Input: digits = [1,2,3]
// Output: [1,2,4]

// **Explanation:** The array represents the integer 123.

// Incrementing by one gives 123 + 1 = 124.
// Thus, the result should be [1,2,4].




#include <iostream>
#include <vector>

std::vector<int> incrementLargeInteger(std::vector<int>& digits) {
    int n = digits.size();
    int carry = 1; // Initialize the carry to 1 for the increment

    for (int i = n - 1; i >= 0; i--) {
        int sum = digits[i] + carry;
        digits[i] = sum % 10;
        carry = sum / 10;

        // If there is no more carry, we can stop the loop
        if (carry == 0) {
            break;
        }
    }

    // If there is still a carry after the loop, we need to add an additional digit
    if (carry > 0) {
        digits.insert(digits.begin(), carry);
    }

    return digits;
}

int main() {
    std::vector<int> digits = {1, 2, 3};
    std::vector<int> result = incrementLargeInteger(digits);

    // Output the resulting array
    for (int digit : result) {
        std::cout << digit << " ";
    }
    std::cout << std::endl;

    return 0;
}
