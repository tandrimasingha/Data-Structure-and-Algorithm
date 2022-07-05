
struct Node
{
    int data;
    Node* left;
    Node* right;
}; 
vector<int> reverseLevelOrder(Node *root)
{
    // code here
    vector<int> ans;
    queue<Node*> q;
    q.push(root);
    int i = 0;
    while(!q.empty()){
        Node*t = q.front();
        q.pop();
        ans.push_back(t -> data);
        if(t -> right)  q.push(t -> right);
        if(t -> left)  q.push(t -> left);
        
    }
    reverse(ans.begin(), ans.end());
    return ans;
    
}
