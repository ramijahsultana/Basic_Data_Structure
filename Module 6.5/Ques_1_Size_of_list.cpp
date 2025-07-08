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

void Inser_at_head(Node* &head, int val)
{
    Node* new_node = new Node(val);
    new_node->next = head;
    new_node = head;

}
void Inser_at_tail(Node* &head, Node* &tail, int val)
{
    Node* newnode = new Node(val);
    if(head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    tail = tail->next;
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

int size_of_list(Node* &head)
{
    
    Node* temp = head;
    int count = 0;
    while(temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;

}

int main()
{

    Node* head = NULL;
    Node* tail = NULL;

    int x;
    while(cin >> x)
    {
        
        Inser_at_tail(head,tail,x);
    }
    
    cout << size_of_list(head) << endl;
    
    //Printing_list(head);

    return 0;
}