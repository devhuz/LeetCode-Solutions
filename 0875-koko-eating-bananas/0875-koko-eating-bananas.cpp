#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        // Search space: [1, max(piles)]
        int left = 1;
        int right = *max_element(piles.begin(), piles.end());
        
        while (left < right) {
            int mid = left + (right - left) / 2;
            
            if (canFinish(piles, h, mid)) {
                // If she can finish, try a slower speed (move left)
                right = mid;
            } else {
                // If she cannot finish, she needs a faster speed (move right)
                left = mid + 1;
            }
        }
        return left;
    }

private:
    bool canFinish(const vector<int>& piles, int h, int speed) {
        long long hours = 0;
        for (int pile : piles) {
            // Ceiling division: (pile + speed - 1) / speed
            // This avoids floating point arithmetic
            hours += (pile + speed - 1) / speed;
        }
        return hours <= h;
    }
};   