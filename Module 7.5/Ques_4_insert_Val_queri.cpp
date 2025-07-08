#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void Inser_at_head(Node *&head, int val)
{
    Node *new_node = new Node(val);
    new_node->next = head;
    head = new_node;
}
void Inser_at_tail(Node *&head, Node *&tail, int val)
{
    Node *newnode = new Node(val);
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    tail = tail->next;
}

void Inser_at_any_pos(Node *&head, int idx, int val)
{
    Node *newnode = new Node(val);
    Node *temp = head;
    for (int i = 1; i < idx; i++)
    {
        temp = temp->next;
    }
    newnode->next = temp->next;
    temp->next = newnode;
}

void Printing_list(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

int size_of_list(Node *&head)
{

    Node *temp = head;
    int count = 0;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}

int main()
{

    Node *head = NULL;
    Node *tail = NULL;

    int val;

    while (1)
    {
        cin >> val;
        if (val == -1)
        {
            break;
        }
        Inser_at_tail(head, tail, val);
    }
    int q;
    cin >> q;
    int idx;
    for (int i = 0; i < q; i++)
    {

        cin >> idx >> val;

        int sz = size_of_list(head);
        if (idx > sz)
        {
            cout << "Invalid" << endl;
        }
        else if (idx == sz)
        {
            Inser_at_tail(head, tail, val);
            Printing_list(head);
        }
        else if (idx == 0)
        {
            Inser_at_head(head, val);
            Printing_list(head);
        }
        else
        {
            Inser_at_any_pos(head, idx, val);
            Printing_list(head);
        }
    }

    return 0;
}