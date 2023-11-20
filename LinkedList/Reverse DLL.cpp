#include<bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node *prev;
    node(int val)
    {
        data = val;
        next = NULL;
        prev = NULL;
    }
};
 
// Reversing our double linked list
void reverse(node*&head)
{
    node*temp = NULL;
    node*curr = head;
   
    /* swap next and prev for all nodes of
    doubly linked list */
    while (curr != NULL)
    {
        temp = curr->prev;
        curr->prev = curr->next;
        curr->next = temp;          
        curr = curr->prev;
    }
 
   
    //Edge case if our linked list is empty Or list with only one node
    if(temp != NULL )
        head = temp->prev;
}
 // insertElement at end of our doubly linked list ;
void insertElement(node*&head, int val)
{
    node * n = new node(val);
    if(head == NULL)
    {
        head = n;
        head->next= NULL;
        return ;
    }
    else {
    node*temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
    n->prev = temp;
    }
}
 
 
 
// printing our double linked list
void display(node*&head)
{
    node*temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
int main()
{
    /* Start with the empty list */
    node*head = NULL;
    insertElement(head, 1);
    insertElement(head, 2);
    insertElement(head, 3);
    insertElement(head, 4);
   
    cout << "Original Linked list" << endl;
    display(head);
    
    /* Reverse doubly linked list */
    reverse(head);
   
    cout << "Reversed Linked list" << endl;
    display(head);      
   
    return 0;
}
