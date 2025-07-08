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

void Inser_at_tail(Node* &head, int val)
{
    Node* newnode = new Node(val);
    if(head == NULL)
    {
        head = newnode;
        return;
    }
    Node* temp = head;
    while(temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newnode;
}

void Printing_list(Node* head)
{
    Node* temp = head;
    while(temp != NULL)
    {
        cout << temp->val << endl;
        temp = temp->next;
    }

}
int main()
{
    Node* head = NULL;
    // Node* a = new Node(20);
    // Node* b = new Node(30);

    // head->next = a;
    // a->next = b;

    Inser_at_tail(head,40);
    Inser_at_tail(head,30);
    Inser_at_tail(head,20);
    Inser_at_tail(head,10);

    Printing_list(head);

    return 0;
}