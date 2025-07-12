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
    Node *head_1 = NULL;
    Node *tail_1 = NULL;
    Node *head_2 = NULL;
    Node *tail_2 = NULL;

    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
            break;
        Insert_at_tail(head_1, tail_1, val);
    }
    // Print_list_forward(head_1);

    while (true)
    {
        cin >> val;
        if (val == -1)
            break;
        Insert_at_tail(head_2, tail_2, val);
    }
    // Print_list_forward(head_2);

    int sz_1 = size_of_list(head_1);
    int sz_2 = size_of_list(head_2);

    if (sz_1 != sz_2)
    {
        cout << "NO" << endl;
    }
    else
    {
        Node *temp_1 = head_1;
        Node *temp_2 = head_2;
        bool same = true;

        while (temp_1 != NULL && temp_2 != NULL)
        {
            if (temp_1->val != temp_2->val)
            {
                same = false;
                break;
            }
            temp_1 = temp_1->next;
            temp_2 = temp_2->next;
        }
        if (temp_1 == NULL && temp_2 == NULL)
        {
            same = true;
        }

        cout << (same ? "YES" : "NO") << endl;
    }

    return 0;
}