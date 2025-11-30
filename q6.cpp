#include <bits/stdc++.h>
using namespace std;

class TreeNode {
public:
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int v){ val = v; left = right = NULL; }
};

bool dfs(TreeNode* root, unordered_set<int>& s) {
    if(!root) return false;

    if(s.count(root->val))
        return true;

    s.insert(root->val);

    return dfs(root->left, s) || dfs(root->right, s);
}

bool containsDuplicate(TreeNode* root) {
    unordered_set<int> s;
    return dfs(root, s);
}

int main() {
    TreeNode* root = new TreeNode(5);
    root->left = new TreeNode(3);
    root->right = new TreeNode(7);
    root->right->left = new TreeNode(3); // duplicate

    cout << (containsDuplicate(root) ? "Duplicates Found" : "No Duplicates");
}
