#pragma once

#include <cstddef>
#include <vector>

// https://leetcode.com/problems/all-nodes-distance-k-in-binary-tree/

// Definition for a binary tree node.
struct TreeNode {
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
  std::vector<int> distanceK(TreeNode *root, TreeNode *target, int k) {}
};
