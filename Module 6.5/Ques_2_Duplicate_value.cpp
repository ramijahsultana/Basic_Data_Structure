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
    head = new_node;

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

int find_the_same(Node* &head)
{
    bool found = false;
    Node* temp = head;
    
    for(Node* i=temp; i->next!=NULL; i=i->next)
    {
        for(Node* j=temp->next; j!=NULL; j=j->next)
        {
            if(i->val==j->val)
            {
                found = true;
            }
        }
    }
    if(found)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return found;

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
    
    find_the_same(head);
    
    //Printing_list(head);

    

    return 0;
}