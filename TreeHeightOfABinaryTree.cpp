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

int height(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    if (root->left == NULL && root->right == NULL)
    {
        return 0;
    }

    int l = height(root->left);
    int r = height(root->right);
    return 1 + max(l, r);
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

    int h = height(h1);
    std::cout << h << std::endl;

    return 0;
}