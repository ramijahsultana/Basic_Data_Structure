#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node *prev;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

void Insert_at_head(Node *&head, Node *&tail, int val)
{
    Node *new_node = new Node(val);
    if (head == NULL)
    {
        head = new_node;
        tail = new_node;
        return;
    }
    new_node->next = head;
    head->prev = new_node;
    head = new_node;
}

void Insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *new_node = new Node(val);
    if (head == NULL)
    {
        head = new_node;
        tail = new_node;
        return;
    }
    tail->next = new_node;
    new_node->prev = tail;
    tail = new_node;
}

void Print_list_forward(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

void Print_list_backward(Node *tail)
{
    Node *temp = tail;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->prev;
    }
    cout << endl;
}

int palindrome_check(Node* head, Node* tail)
{
    Node* left = head;
    Node* right = tail;
    bool is_palindrome = true;
    for(Node* i=left, *j=right; i!=j && i->prev!=j; i=i->next, j=j->prev)
    {
        if(i->val != j->val)
        {
            is_palindrome = false;
            break;
        }
    }
    if(is_palindrome)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return is_palindrome;
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int val;
    
    while (true)
    {
        cin >> val;
        if(val == -1) break;
        Insert_at_tail(head, tail, val);
    }

    palindrome_check(head, tail);


    return 0;
}