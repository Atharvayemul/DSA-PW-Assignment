#include <vector>

bool canPlaceFlowers(vector<int>& flowerbed, int n) {
    int count = 0;
    int size = flowerbed.size();
    int i = 0;

    while (i < size) {
        if (flowerbed[i] == 0 && (i == 0 || flowerbed[i - 1] == 0) && (i == size - 1 || flowerbed[i + 1] == 0)) {
            flowerbed[i] = 1;  // Place a flower in the current plot
            count++;  // Increment the count of placed flowers
        }

        i++;  // Move to the next plot
    }

    return count >= n;  // Return true if enough flowers were placed
}
