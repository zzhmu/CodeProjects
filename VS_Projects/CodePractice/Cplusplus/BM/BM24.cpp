#include<iostream>
#include<vector>
using namespace std;
struct TreeNode {
    int val;
    struct TreeNode* left;
    struct TreeNode* right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};
class Solution {
public:
    vector<int> res;
    void dfs(TreeNode* Node) {
        if (Node == nullptr) return;
        
        TreeNode* last_root = Node;
        dfs(Node->left);
        res.push_back(Node->val);
        dfs(last_root);
        dfs(last_root->right);
    }
    vector<int> inorderTraversal(TreeNode* root) {
        // write code here
        dfs(root);
        return res;
    }
};
int main() {

    Solution s;
    TreeNode* Node = new TreeNode(0);
    char x;
    int cout = 0;
    while (cin>>x)
    {
        if (isdigit(x - '0')) {//这儿好像不用转化成整数
            if (cout % 2 == 0) {
                Node->val = x;
                cout++;
            }
            else {
                Node->val = x;
                cout++;
            }
            Node->val = x;
            cout++;
        }
        if (x == '#') {
            if (cout % 2 == 0) {
                Node->left = nullptr;
                cout++;
            }
            else {
                Node->left = nullptr;
                cout++;
            }

        }
    }

    vector<int> v = s.inorderTraversal(Node);
    vector<int>::iterator it;
    for (it = v.begin(); it != v.end(); it++) {
        cout << *it;
    }

}