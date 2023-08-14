#pragma once

#include <string>
#include <vector>

// https://leetcode.com/problems/n-queens/
class Solution {
    vector <vector<std::pair < int, int>>>
    res;
    std::vector<int> cur_state;
    std::vector <std::pair<int, int>> cur_pos;
    int len;
    std::vector <std::vector<std::string>> parsed_result;

    bool CheckPos(int x, int y) {
        for (const auto &el: cur_pos) {
            if (el.first == x || el.second == y || x + y == el.first + el.second || x - y == el.first - el.second) {
                return false;
            }
        }

        return true;
    }

    void FindSol(int pos) {
        if (pos == len) {
            res.push_back(cur_pos);
            return;
        }

        for (size_t i = 0; i < len; ++i) {
            if (CheckPos(pos, i)) {
                cur_pos.push_back(std::pair<int, int>(pos, i));
                FindSol(pos + 1);
                cur_pos.pop_back();
            }
        }
    }

    void ParsePositions(const std::vector <std::pair<int, int>> &data) {
        if (data.size() != len) {
            return;
        }

        std::vector <std::string> parsed_res(len, "");

        for (const auto &el_pair: data) {
            std::string str(len, '.');
            str[el_pair.second] = 'Q';

            parsed_res[el_pair.first] = str;
        }

        parsed_result.push_back(parsed_res);
    }

public:
    vector <vector<string>> solveNQueens(int n) {
        len = n;

        if (n == 1) {
            parsed_result.push_back(std::vector<std::string>(1, "Q"));

            return parsed_result;
        }

        for (size_t i = 0; i < n; ++i) {
            FindSol(i);
        }

        for (const auto &elem: res) {
            ParsePositions(elem);
        }

        return parsed_result;
    }
};
