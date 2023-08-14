#pragma once

#include <vector>

// https://leetcode.com/problems/binary-tree-level-order-traversal/

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode() : val(0), left(nullptr), right(nullptr) {}

    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}

    TreeNode(int x, TreeNode *left, TreeNode *right)
            : val(x), left(left), right(right) {}
};

class Solution {
    std::vector <std::vector<int>> res;

    int findHeight(TreeNode *root) {
        if (!root) return 0;
        return 1 + std::max(findHeight(root->left), findHeight(root->right));
    }

public:
    void dfs(TreeNode *root, int level = 0) {
        if (!root) {
            return;
        }

        res[level].push_back(root->val);

        dfs(root->left, level + 1);
        dfs(root->right, level + 1);
    }

    vector <vector<int>> levelOrder(TreeNode *root) {
        if (!root) {
            return res;
        }

        res.resize(findHeight(root));

        dfs(root);

        return res;
    }
};