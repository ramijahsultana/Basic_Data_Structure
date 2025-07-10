#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int val;
    Node* next;
    Node* prev;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

void Print_forward(Node* head)
{
    Node* temp = head;
    while(temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

void Insert_at_tail(Node* &head, Node* &tail, int val)
{
    Node* newnode = new Node(val);
    if(head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    newnode->prev = tail;
    tail = newnode;
}

void Reverse_Linked_List(Node* head, Node* tail)
{
    for(Node* i = head,*j = tail; i != j && i->prev != j; i=i->next, j=j->prev)
    {
        swap(i->val, j->val);
    }
}

int main()
{
    Node* head = NULL;
    Node* tail = NULL;


    int val;
    while(true)
    {
        
        cin >> val;
        if(val == -1)
        {
            break;
        }
        Insert_at_tail(head, tail, val);
    }
    
    Print_forward(head);
    Reverse_Linked_List(head, tail);
    Print_forward(head);

    return 0;
}