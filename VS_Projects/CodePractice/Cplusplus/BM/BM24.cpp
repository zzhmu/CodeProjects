//#include <iostream>
//#include <vector>
//#include <string>
//#include <queue>
//using namespace std;
//struct TreeNode {
//    int val;
//    struct TreeNode* left;
//    struct TreeNode* right;
//    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//};
//class Solution {
//public:
//    vector<int> res;
//    void dfs(TreeNode* Node) {
//        if (Node == nullptr) return;
//        
//        //TreeNode* last_root = Node;
//        
//        dfs(Node->left);
//        res.push_back(Node->val);
//        dfs(Node->right);
//    }
//    vector<int> inorderTraversal(TreeNode* root) {
//        // write code here
//        dfs(root);
//        return res;
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
//        if ( i < nodes.size() && nodes[i] != "#") {
//            cur->right = new TreeNode(stoi(nodes[i]));
//            q.push(cur->right);
//        }
//        i++;
//    }
//    return root;
//}
//int main() {;
//    
//    string x;
//    vector<string> res = { "1","2","#","#","5" };
//    //cout << "input x:";
//    //while (cin>>x)
//    //{
//    //    if (x != "q") {
//    //        res.push_back(x);
//    //    }
//    //    else {
//    //        break;
//    //    }
//    //    cout << "input next x:";
//    //}
//    //cout << "res:";
//    //for (int i = 0; i < res.size(); i++) {
//    //    cout << res[i] << " ";
//    //}
//    //cout << endl;
//    Solution s;
//    
//    TreeNode* root = buildTree(res);
//    vector<int> v = s.inorderTraversal(root);
//    
//    vector<int>::iterator it;
//    cout << "中序遍历：";
//    for (it = v.begin(); it != v.end(); it++) {
//        cout << *it<<" ";
//    }
//
//}