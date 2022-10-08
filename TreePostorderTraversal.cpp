#include <bits/stdc++.h>
#define ll long long int
#define FastIO                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node(int d)
    {
        data = d;
        left = NULL;
        right = NULL;
    }
};

void postOrder(Node *root)
{
    if (root->left != NULL)
        postOrder(root->left);
    if (root->right != NULL)
        postOrder(root->right);
    std::cout << root->data << ' ';
}

int main()
{

    FastIO;
    // 1 2 5 3 4 6
    Node *h1 = new Node(1);
    h1->right = new Node(2);
    h1->right->right = new Node(5);
    h1->right->right->right = new Node(6);
    h1->right->right->left = new Node(3);
    h1->right->right->left->left = new Node(4);

    postOrder(h1);
    std::cout << std::endl;

    return 0;
}