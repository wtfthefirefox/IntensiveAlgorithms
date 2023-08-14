#pragma once

#include <vector>

// https://leetcode.com/problems/sort-an-array/
class Solution {
public:
    ector<int> sortArray(vector<int>& nums) {
        for(size_t i = 0; i < nums.size() - 1; ++i) {
            int min_idx = i;

            for(size_t g = i + 1; g < nums.size(); ++g) {
                if (nums[min_idx] > nums[g]) {
                    min_idx = g;
                }
            }

            std::swap(nums[i], nums[min_idx]);
        }

        return nums;
    }
};
