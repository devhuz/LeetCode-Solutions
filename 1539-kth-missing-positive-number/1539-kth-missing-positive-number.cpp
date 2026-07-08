class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
                      // 1. Populate hash set with existing numbers
    unordered_set<int> existing;
    for (int num : arr) {
        existing.insert(num);
    }

    // 2. Iterate through positive integers to find missing ones
    int current = 1;
    while (true) {
        // If current number is not in the set, it is missing
        if (existing.find(current) == existing.end()) {
            k--;
            if (k == 0) {
                return current;
            }
        }
        current++;
    }
}
};