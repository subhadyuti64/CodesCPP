#include<iostream>
using namespace std;

struct TreeNode
{
    int data;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int data)
    {
        this->data = data;
        this->left = nullptr;
        this->right = nullptr;
    }
};

// Pre-Order Traversal
vector<int> preOrderTraversal(vector<int> result,TreeNode* root)
{
    if(root==NULL) return result;

    result.push_back(root->data);
    result=preOrderTraversal(result,root->left);
    result=preOrderTraversal(result,root->right);

    return result;
}

// Post-Order Traversal
vector<int> postOrderTraversal(vector<int> result,TreeNode* root)
{
    if(root==NULL) return result;

    
    result=postOrderTraversal(result,root->left);
    result=postOrderTraversal(result,root->right);
    result.push_back(root->data);

    return result;
}

// In-Order Traversal
vector<int> inOrderTraversal(vector<int> result,TreeNode* root)
{
    if(root==NULL) return result;

    
    result=inOrderTraversal(result,root->left);
    result.push_back(root->data);
    result=inOrderTraversal(result,root->right);
    
    return result;
}

int main()
{
    TreeNode* n1= new TreeNode(1);
    TreeNode* n2= new TreeNode(2);
    TreeNode* n3= new TreeNode(3);
    TreeNode* n4= new TreeNode(4);
    TreeNode* n5= new TreeNode(5);
    TreeNode* n6= new TreeNode(6);
    TreeNode* n7= new TreeNode(7);

    n1->left=n2;
    n1->right=n3;

    n2->left=n4;
    n2->right=n5;

    n3->left=n6;
    n3->right=n7;

    vector<int>  result;
    // result = preOrderTraversal(result,n1);
    // result = postOrderTraversal(result,n1);
    // result=inOrderTraversal(result,n1);

    for(auto i: result) cout<<i<<"->";
    cout<<endl;
}