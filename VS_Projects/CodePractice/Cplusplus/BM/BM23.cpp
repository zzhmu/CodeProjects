//#include<iostream>
//#include<vector>
//using namespace std;
//struct TreeNode {
//    int val;
//    struct TreeNode* left;
//    struct TreeNode* right;
//    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//};
// 
//class Solution {
//public:
//    vector<int> res;
//    void dfs(TreeNode* Node) {
//        if (Node == nullptr) return;
//        res.push_back(Node->val);
//        dfs(Node->left);
//        dfs(Node->right);
//    }
//    vector<int> preorderTraversal(TreeNode* root) {
//        // write code here
//        dfs(root);
//        return res;
//    }
//};
//int main() {
//
//    Solution s;
//    TreeNode* Node = new TreeNode(0);
//    int x;
//    int left;
//    int right;
//    cin >> x;
//    cin >> left;
//    cin >> right;
//    Node->val = x;
//    Node->left= new TreeNode(0);
//    Node->right = new TreeNode(0);
//
//    Node->left->val = left;
//    Node->right->val = right;
//    vector<int> v = s.preorderTraversal(Node);
//    vector<int>::iterator it;
//    for (it = v.begin(); it != v.end(); it++) {
//        cout << *it;
//    }
//
//
//}