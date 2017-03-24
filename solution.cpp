//
// Created by 王青龙 on 2017/3/24.
//

#include "solution.h"

TreeNode *Solution::lowestCommonAncestor(TreeNode *root, TreeNode *p, TreeNode *q) {
    auto curRoot = root;
    while (true) {
        if (p->val < curRoot->val && q->val < curRoot->val) {
            curRoot = curRoot->left;
        } else if (p->val > curRoot->val && q->val > curRoot->val) {
            curRoot = curRoot->right;
        } else {
            return curRoot;
        }
    }
}
