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

void returnData(Node *root, vector<int> &v)
{
    v.push_back(root->data);
    if (root->left != NULL)
        returnData(root->left, v);
    if (root->right != NULL)
        returnData(root->right, v);
    if (root != NULL)
    {
        return;
    }
}

void inOrder(Node *root)
{
    vector<int> v;
    returnData(root, v);
    sort(v.begin(), v.end());
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
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

    inOrder(h1);
    std::cout << std::endl;

    return 0;
}