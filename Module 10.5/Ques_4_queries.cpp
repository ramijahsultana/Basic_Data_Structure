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

int size_of_list(Node *head)
{
    Node *temp = head;
    int sz = 0;
    while (temp != NULL)
    {
        sz++;
        temp = temp->next;
    }
    return sz;
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int q;
    cin >> q;

    while (q--)
    {
        int idx, val;
        cin >> idx >> val;
        int sz = size_of_list(head);

        if (idx < 0 || idx > sz)
        {
            cout << "Invalid" << endl;
            continue;
        }
        else if (idx == 0)
        {
            Insert_at_head(head, tail, val);
        }
        else if (idx == sz)
        {
            Insert_at_tail(head, tail, val);
        }
        else
        {
            Node *new_node = new Node(val);
            Node *temp = head;
            for (int i = 1; i < idx; i++)
            {
                temp = temp->next;
            }
            new_node->next = temp->next;
            temp->next->prev = new_node;
            temp->next = new_node;
            new_node->prev = temp;
            if (new_node->next == NULL)
            {
                tail = new_node;
            }
        }

        Print_list_forward(head);
        Print_list_backward(tail);
    }

    return 0;
}