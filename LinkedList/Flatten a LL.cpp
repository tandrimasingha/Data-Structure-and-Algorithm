Node *merge(Node *l1, Node *l2)
{
    if(l1 == NULL) return l2;
    if(l2 == NULL) return l1;
    if(l1 -> data > l2 -> data) swap(l1, l2);
    Node *head = l1;
    while(l1 != NULL && l2 != NULL)
    {
        Node *temp = NULL;
        while(l1 != NULL && l1 -> data <= l2 -> data)
        {
            temp = l1;
            l1 = l1 -> bottom;
        }
        swap(l1, l2);
        temp -> bottom = l1;
    }
    return head;
}

Node *flatten(Node *root)
{
    if(root -> next == NULL)
    {
        return root;
    }
    root -> next = flatten(root -> next);
    root = merge(root -> next, root);
    return root;
}
