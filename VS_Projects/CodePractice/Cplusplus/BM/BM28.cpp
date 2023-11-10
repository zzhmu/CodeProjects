//#include<iostream>
//#include<vector>
//#include<string>
//#include<queue>
//#include <algorithm>
//using namespace std;
//struct TreeNode {
//    int val;
//    struct TreeNode* left;
//    struct TreeNode* right;
//    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//   
//};
// 
//class Solution {
//public:
//    int maxDepth(TreeNode* root) {
//        if (!root) return 0;  //递归边界
//        return max(maxDepth(root->left), maxDepth(root->right)) + 1;  //计算左子树和右子树深度取大者最后+1 = 树的深度
//    }
//};
//
//TreeNode* buildTree(vector<string>& nodes) {
//    // 如果节点为空，返回 nullptr
//    if (nodes.empty()) {
//        return nullptr;
//    }
//    // 创建根节点
//    TreeNode* root = new TreeNode(stoi(nodes[0]));
//
//    // 使用队列来逐层构建二叉树
//    queue<TreeNode*> q;
//    q.push(root);
//
//    int i = 1;
//    while (!q.empty() && i < nodes.size()) {
//        TreeNode* cur = q.front();
//        q.pop();
//
//        // 左子结点
//        if (nodes[i] != "#") {
//            cur->left = new TreeNode(stoi(nodes[i]));
//            q.push(cur->left);
//        }
//        i++;
//
//        // 右子结点
//        if (i < nodes.size() && nodes[i] != "#") {
//            cur->right = new TreeNode(stoi(nodes[i]));
//            q.push(cur->right);
//        }
//        i++;
//    }
//    return root;
//}
//int main() {
//
//    string x;
//    vector<string> res = { "1","2","3","4","#","#","5"};
//    Solution s;
//    TreeNode* root = buildTree(res);
//    int L = s.maxDepth(root);
//    cout << L;
//}