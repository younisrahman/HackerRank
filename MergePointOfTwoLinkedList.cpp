#include <bits/stdc++.h>

using namespace std;

class SinglyLinkedListNode
{
public:
    int data;
    SinglyLinkedListNode *next;

    SinglyLinkedListNode(int node_data)
    {
        this->data = node_data;
        this->next = nullptr;
    }
};

class SinglyLinkedList
{
public:
    SinglyLinkedListNode *head;
    SinglyLinkedListNode *tail;

    SinglyLinkedList()
    {
        this->head = nullptr;
        this->tail = nullptr;
    }

    void insert_node(int node_data)
    {
        SinglyLinkedListNode *node = new SinglyLinkedListNode(node_data);

        if (!this->head)
        {
            this->head = node;
        }
        else
        {
            this->tail->next = node;
        }

        this->tail = node;
    }
};

void print_singly_linked_list(SinglyLinkedListNode *node, string sep, ofstream &fout)
{
    while (node)
    {
        fout << node->data;

        node = node->next;

        if (node)
        {
            fout << sep;
        }
    }
}

void free_singly_linked_list(SinglyLinkedListNode *node)
{
    while (node)
    {
        SinglyLinkedListNode *temp = node;
        node = node->next;

        free(temp);
    }
}

// Complete the findMergeNode function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
int length(SinglyLinkedListNode *head)
{
    SinglyLinkedListNode *temp = head;
    int count = 0;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}
int findMergeNode(SinglyLinkedListNode *head1, SinglyLinkedListNode *head2)
{

    int l1 = length(head1);
    int l2 = length(head2);
    int d = 0;
    SinglyLinkedListNode *p1;
    SinglyLinkedListNode *p2;
    if (l1 > l2)
    {
        d = l1 - l2;
        p1 = head1;
        p2 = head2;
    }
    else
    {
        d = l2 - l1;
        p1 = head2;
        p2 = head1;
    }
    while (d--)
    {
        p1 = p1->next;
        if (p1 == NULL)
        {
            return -1;
        }
    }
    while (p1 != NULL && p2 != NULL)
    {
        if (p1 == p2)
        {
            return p1->data;
        }
        p1 = p1->next;
        p2 = p2->next;
    }
    return -1;
}

int main()