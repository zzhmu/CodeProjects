//#include<iostream>
//#include<vector>
//#include<string>
//#include<queue>
//using namespace std;
//struct TreeNode {
//	int val;
//	struct TreeNode *left;
//	struct TreeNode *right;
//	TreeNode(int x) :
//			val(x), left(NULL), right(NULL) {
//	}
//};
//class Solution {
//private:
//    TreeNode* pre=nullptr;
//    TreeNode* root=nullptr;
//public:
// 
//    TreeNode* Convert(TreeNode* pRootOfTree) {
//        if (pRootOfTree == nullptr) {
//            return nullptr;
//        }
//        Convert(pRootOfTree->left);
//        if (root == nullptr) {
//            root = pRootOfTree;
//        }
//        if (pre != nullptr) {
//            pRootOfTree->left = pre;
//            pre->right = pRootOfTree;
//        }
//        pre = pRootOfTree;
//        Convert(pRootOfTree->right);
//        return root;
//    }
//};
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
//    vector<string> res = { "5","4","8","1","11","#","9","#","#","2","7" };
//    Solution s;
//    TreeNode* root = buildTree(res);
// 
//    TreeNode* T= s.Convert(root);
//}