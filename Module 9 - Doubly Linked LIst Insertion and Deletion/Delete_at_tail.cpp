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

void Delete_at_tail(Node* &head, Node* &tail)
{
    Node* delete_node = tail;
    tail = tail->prev;
    delete delete_node;
    if(tail == NULL)
    {
        head = NULL;
        return;
    }
    tail->next = NULL;
}

int main()
{
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* tail = new Node(30);

    head->next = a;
    a->prev = head;

    a->next = tail;
    tail->prev = a;
    
    Delete_at_tail(head, tail);
    Print_forward(head);
    
    return 0;
}