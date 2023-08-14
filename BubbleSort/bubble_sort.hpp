#pragma once

#include <vector>

// https://leetcode.com/problems/sort-an-array/
class Solution {
public:
    or(size_t i = 0; i < nums.size() - 1; ++i) {
        for(size_t g = i + 1; g < nums.size(); ++g) {
            if (nums[i] > nums[g]) {
                std::swap(nums[i], nums[g]);
            }
        }
    }

    return nums;
};