#include <iostream>
#include <vector>
#include <unordered_set>

int distributeCandies(std::vector<int>& candyType) {
    int n = candyType.size();
    int maxTypes = n / 2;

    std::unordered_set<int> uniqueTypes;
    for (int i = 0; i < n && uniqueTypes.size() < maxTypes; i++) {
        uniqueTypes.insert(candyType[i]);
    }

    return uniqueTypes.size();
}

int main() {
    std::vector<int> candyType = {1, 1, 2, 2, 3, 3};
    int maxTypes = distributeCandies(candyType);
    std::cout << "Maximum number of different types of candies Alice can eat: " << maxTypes << std::endl;

    return 0;
}
