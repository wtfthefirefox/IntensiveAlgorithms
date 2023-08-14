#pragma once

#include <string>

// https://leetcode.com/problems/valid-parentheses/
class Solution {
public:
    bool isValid(std::string s) {
        stack<char> st;
        unordered_map<char, char> breckets = {{'{', '}'},
                                              {'(', ')'},
                                              {'[', ']'}};
        int i = 0;

        if (s.size() == 1) return false;

        while (i < s.size()) {
            if (s[i] == '(' || s[i] == '[' || s[i] == '{') st.push(s[i]);
            else {
                if (st.empty()) return false;
                if (breckets[st.top()] == s[i]) st.pop();
                else return false;
            }
            i++;
        }

        if (st.empty()) return true;
        else return false;
    }
};
