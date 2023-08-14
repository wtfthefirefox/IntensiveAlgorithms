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
    std::unordered_map<int, bool> path_info;
    std::unordered_map<int, std::vector<int>> data;

public:
    void dfsRoot(std::vector<int> &res, int root, int dist) {
        if (path_info[root]) {
            return;
        }

        if (!dist) {
            res.push_back(root);
            return;
        }

        path_info[root] = true;

        for (const auto &el: data[root]) {
            dfsRoot(res, el, dist - 1);
        }
    }

    void dfs(TreeNode *root) {
        if (!root) {
            return;
        }

        if (root->left) {
            data[root->val].push_back(root->left->val);
            data[root->left->val].push_back(root->val);
        }

        if (root->right) {
            data[root->val].push_back(root->right->val);
            data[root->right->val].push_back(root->val);
        }

        dfs(root->left);
        dfs(root->right);
    }

    vector<int> distanceK(TreeNode *root, TreeNode *target, int k) {
        std::vector<int> res;

        dfs(root);
        dfsRoot(res, target->val, k);

        return res;
    }
};
