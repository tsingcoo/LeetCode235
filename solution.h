//
// Created by 王青龙 on 2017/3/24.
//

#ifndef LEETCODE235_SOLUTION_H
#define LEETCODE235_SOLUTION_H

struct TreeNode{
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x):val(x), left(nullptr), right(nullptr){}
};

class Solution{
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* left, TreeNode* right);
};

#endif //LEETCODE235_SOLUTION_H
