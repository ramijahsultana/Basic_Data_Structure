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

void Delete_at_any_pos(Node* head, int idx)
{
    Node* temp = head;
    for(int i = 1; i<idx; i++)
    {
        temp = temp->next;
    }
    Node* delete_node = temp->next;
    temp->next = delete_node->next;
    temp->next->prev = temp;
    delete delete_node;
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
    
    Delete_at_any_pos(head, 2);
    Print_forward(head);
    
    return 0;
}