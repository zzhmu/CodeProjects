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
//private:
//    bool has = false;
//public:
//    void dfs(TreeNode* root, int sum) {
//        if (root == nullptr) {
//            
//            return;
//        }
//
//        if (root->val == sum) {
//            has = true;
//        }
//        dfs(root->left,  sum-root->val);
//        //cout << now;
//        dfs(root->right, sum - root->val);
//
//        //now -= last;
//    }
//    bool hasPathSum(TreeNode* root, int sum) {
//        // write code here
//        dfs(root,sum);
//        return has;
//        
//    }
//};
//
//TreeNode* buildTree(vector<string>& nodes) {
//    // ����ڵ�Ϊ�գ����� nullptr
//    if (nodes.empty()) {
//        return nullptr;
//    }
//    // �������ڵ�
//    TreeNode* root = new TreeNode(stoi(nodes[0]));
//
//    // ʹ�ö�������㹹��������
//    queue<TreeNode*> q;
//    q.push(root);
//
//    int i = 1;
//    while (!q.empty() && i < nodes.size()) {
//        TreeNode* cur = q.front();
//        q.pop();
//
//        // ���ӽ��
//        if (nodes[i] != "#") {
//            cur->left = new TreeNode(stoi(nodes[i]));
//            q.push(cur->left);
//        }
//        i++;
//
//        // ���ӽ��
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
//    cout<<"�Ƿ���ڣ�" << s.hasPathSum(root, 10);
//}