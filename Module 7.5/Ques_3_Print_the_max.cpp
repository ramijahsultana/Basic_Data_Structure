#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int val;
    Node* next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void Insert_at_tail(Node* &head, Node* &tail, int val)
{
    Node* new_node = new Node(val);
    if(head == NULL)
    {
        head = new_node;
        tail = new_node;
    }
    tail->next = new_node;
    tail = tail->next;
}

void Printing_the_list(Node* &head)
{
    Node* temp = head;
    while(temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;

}

int Find_the_max(Node* &head, int val)
{
    if(head == NULL)
    {
        return INT_MIN;
    }
    int mx = head->val;
    Node* temp = head->next;
    while(temp != NULL)
    {
        mx = max(mx,temp->val);
        temp = temp->next;
    }
    return mx;
}

int main()
{
    Node* head = NULL;
    Node* tail = NULL;
    
    Node* temp = head;

    int val;
    while(1)
    {
        cin >> val;
        if(val == -1)
        {
            break;
        }
       Insert_at_tail(head, tail, val);
    }

    //Printing_the_list(head);
    cout << Find_the_max(head,val) << endl;

    return 0;
}