#include <bits/stdc++.h>
//#include<iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int val)
    {
        data = val;
        next = NULL;
    }
};
void insertInHead(Node *&head, int val)
{
    Node *n = new Node(val);
    n->next = head;
    head = n;
}
void insertInEnd(Node *&head, int val)
{
    Node *n = new Node(val);
    Node *temp = head;
    if (head == NULL)
    {
        insertInHead(head, val);
        return;
    }
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
}
void insertAfterValue(Node *&head, int val, int place)
{
    Node *n = new Node(val);
    Node *temp = head;
    while (temp->next != NULL && place != temp->data)
    {
        temp = temp->next;
    }
    n->next = temp->next;
    temp->next = n;
}
void insertAfterPosition(Node *&head, int val, int place)
{
    Node *n = new Node(val);
    Node *temp = head;
    int count = 0;
    while (temp->next != NULL && place != count)
    {
        temp = temp->next;
        count++;
    }
    n->next = temp->next;
    temp->next = n;
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
void deleteHead(Node *&head)
{
    Node *toDelete = head;
    head = head->next;
    delete toDelete;
}
void deleteTail(Node *&head)
{

    Node *temp = head;
    int count = 0;
    while (temp->next->next != NULL)
    {
        temp = temp->next;
    }
    Node *toDelete = temp->next->next;
    temp->next = NULL;
    delete toDelete;
}
void deleteValue(Node *&head, int val)
{
    Node *temp = head;
    while (temp != NULL && temp->next->data != val)
    {
        temp = temp->next;
    }
    Node *toDelete = temp->next;
    temp->next = temp->next->next;
    delete toDelete;
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
Node *mergeLists(Node *&head1, Node *&head2)
{
    Node *p1 = head1;
    Node *p2 = head2;
    Node *dummyNode = new Node(-1);
    Node *p3 = dummyNode;
    while (p1 != NULL && p2 != NULL)
    {
        if (p1->data > p2->data)
        {
            p3->next = p2;
            p2 = p2->next;
        }
        else
        {
            p3->next = p1;
            p1 = p1->next;
        }
        p3 = p3->next;
    }
    while (p1 != NULL)
    {
        p3->next = p1;
        p1 = p1->next;
        p3 = p3->next;
    }
    while (p2 != NULL)
    {
        p3->next = p2;
        p2 = p2->next;
        p3 = p3->next;
    }
    return dummyNode->next;
}

Node *mergeListsRecursion(Node *&head1, Node *&head2)
{
    if (head1 == NULL)
    {
        return head2;
    }
    if (head2 == NULL)
    {
        return head1;
    }
    Node *result;
    if (head1->data < head2->data)
    {
        result = head1;
        result->next = mergeListsRecursion(head1->next, head2->next);
    }
    else
    {
        result = head1;
        result->next = mergeListsRecursion(head1->next, head2);
    }
    return result;
}
Node *removeDuplicate(Node *llist)
{
    Node *temp = llist;
    Node *temp2 = llist;
    while (temp->next != NULL)
    {
        if (temp->data == temp->next->data)
        {
            temp->next = temp->next->next;
        }
        else
        {
            temp = temp->next;
        }
    }
    return temp2;
}

int main()
{
    Node *head = NULL;
    insertInEnd(head, 1);
    insertInEnd(head, 2);
    insertInEnd(head, 2);
    insertInEnd(head, 3);
    insertInEnd(head, 4);
    Node *head3 = removeDuplicate(head);
    display(head3);

    return 0;
}