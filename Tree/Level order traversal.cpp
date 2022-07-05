
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
};



class Solution
{
    public:
    //Function to return the level order traversal of a tree.
    vector<int> levelOrder(Node* node)
    {
      //Your code here
      vector<int> ans;
      if(node==NULL) return ans;
      queue<Node*> q;
      q.push(node);
      while(!q.empty())
      {
          Node* it=q.front();
          q.pop();
          ans.push_back(it->data);
          if(it->left) q.push(it->left);
          if(it->right) q.push(it->right);
      }
      return ans;
    }
};
