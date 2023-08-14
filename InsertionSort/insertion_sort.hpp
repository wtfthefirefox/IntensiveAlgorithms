#pragma once

// https://leetcode.com/problems/insertion-sort-list/

// Definition for singly-linked list.
struct ListNode {
  int val;
  ListNode *next;
  ListNode() : val(0), next(nullptr) {}
  ListNode(int x) : val(x), next(nullptr) {}
  ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* insertionSortList(ListNode* head) {
        ListNode* head_copy = head;
        std::vector<int> arr;

        while(head) {
            arr.push_back(head->val);

            head = head->next;
        }


        for(size_t i = 1; i < arr.size(); ++i) {
            while (i < arr.size() && arr[i] >= arr[i - 1]) {
                ++i;
            }

            if (i == arr.size()) {
                break;
            }

            size_t stop_pos = 0;

            for(int g = i; g > 0; --g) {
                if (arr[g] > arr[g - 1]) {
                    break;
                } else {
                    std::swap(arr[g], arr[g - 1]);
                }
            }
        }

        head = head_copy;
        size_t i = 0;

        while(head) {
            head->val = arr[i];
            ++i;

            head = head->next;
        }

        return head_copy;
    }
};
