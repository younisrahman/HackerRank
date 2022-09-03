#include <bits/stdc++.h>
//#include<iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node *previous;
    Node(int val)
    {
        data = val;
        next = NULL;
        previous = NULL;
    }
};
void insertInHead(Node *&head, int val)
{
    Node *n = new Node(val);
    n->next = head;
    if (head != NULL)
    {
        n->next->previous = head;
    }
    head = n;
}
Node *sortedInsert(Node *llist, int data)
{
    Node *temp = llist;
    Node *n = new Node(data);
    while (temp->next != NULL)
    {
        if ((data < temp->data || data == temp->data) || data > temp->data && data < temp->next->data)
        {
            break;
        }
        temp = temp->next;
    }
    if (data < temp->data){
        insertInHead(llist,data);
        return llist;
    }
    n->previous = temp;
    n->next = temp->next;
    temp->next = n;
    temp->next->previous = n;

    return llist;
}
void display(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " --> ";
        temp = temp->next;
    }
    std::cout << "NULL" << std::endl;
}

void length(Node *&head)
{
    Node *temp = head;
    int count = 0;
    while (temp != NULL)
    {
        temp = temp->next;
        count++;
    }
    cout << "Length of Linked List is " << count << endl;
}
void search(Node *&head, int val)
{
    Node *temp = head;
    int count = 0;
    while (temp != NULL)
    {
        if (temp->data == val)
        {
            cout << " The Value found in " << count << " location" << endl;
            return;
        }
        temp = temp->next;
        count++;
    }
    cout << "Not found" << endl;
}

int main()
{
    Node *head = NULL;
    // insertInHead(head, 10);
    insertInHead(head, 4);
    insertInHead(head, 3);
    insertInHead(head, 1);
    display(head);
    Node *tmp = sortedInsert(head, 1);
    display(tmp);

    return 0;
}