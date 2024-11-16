#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int planted = 0;
        int size = flowerbed.size();

        for (int i = 0; i < size; ++i) {
            // Check if the current plot is empty and its neighbors are also empty or out of bounds
            if (flowerbed[i] == 0 && (i == 0 || flowerbed[i - 1] == 0) && (i == size - 1 || flowerbed[i + 1] == 0)) {
                flowerbed[i] = 1; // Plant a flower
                planted++;
                i++; // Skip the next spot
            }
        }
        
        return n <= planted;
    }
};
