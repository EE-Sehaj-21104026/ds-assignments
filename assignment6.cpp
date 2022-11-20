// binary search tree in cpp
#include <iostream>
#include <bits/stdc++.h>
#include <queue>
using namespace std;
// creating tree node classs
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

// function to insert a node  in the tree
Node *insert(Node *root, int data)
{
    if (root == NULL)
    {
        return new Node(data);
    }
    else
    {
        Node *cur;
        if (data <= root->data)
        {
            cur = insert(root->left, data);
            root->left == cur;
        }
        else
        {
            cur = insert(root->right, data);
            root->right = cur;
        }
        return root;
    }
}
// funciton to delete a node from the array
Node *deletenode(Node *root, int k)
{
    // Base case
    if (root == NULL)
        return root;
    // If root->data is greater than k then we delete the root's subtree
    if (root->data > k)
    {
        root->left = deletenode(root->left, k);
        return root;
    }
    else if (root->data < k)
    {
        root->right = deletenode(root->right, k);
        return root;
    }

    // If one of the children is empty
    if (root->left == NULL)
    {
        Node *temp = root->right;
        delete root;
        return temp;
    }
    else if (root->right == NULL)
    {
        Node *temp = root->left;
        delete root;
        return temp;
    }
    else
    {
        Node *Parent = root;
        // Find successor of the node
        Node *succ = root->right;
        while (succ->left != NULL)
        {
            Parent = succ;
            succ = succ->left;
        }

        if (Parent != root)
            Parent->left = succ->right;
        else
            Parent->right = succ->right;

        // Copy Successor Data
        root->data = succ->data;

        // Delete Successor and return root
        delete succ;
        return root;
    }
}

// Function to print a tree using Level Order Traversal
void level_order_traversal(Node *root)
{
    queue<Node *> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();

        if (temp == NULL)
        {
            cout << endl;
            if (!q.empty())
            {
                q.push(NULL);
            };
        }

        else
        {
            cout << temp->data << " ";
            if (temp->left)
            {
                q.push(temp->left);
            }
            if (temp->right)
            {
                q.push(temp->right);
            }
        }
    }
}
// functiom to delete an element from the array
void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
}
void deleteElement(int arr[], int n, int x)
{
    int i;
    for (i = 0; i < n; i++)
        if (arr[i] == x)
            break;

    if (i < n)
    {
        n = n - 1;
        for (int j = i; j < n; j++)
            arr[j] = arr[j + 1];
    }
    print(arr, n);
}

int main()
{
    int n;
    cout << "Enter the size of the array : ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array " << endl;
    Node Tree(0);
    Node *root = NULL;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        // inseritng elements in the tree
        root = insert(root, arr[i]);
    }
    cout << "elements in the tree" << endl;
    level_order_traversal(root);
    int k;
    cout << "Enter an elemeent to be deleted from the tree " << endl;
    cin >> k;
    deletenode(root, k);
    cout << "Elements after delection from the tree" << endl;
    level_order_traversal(root);
    cout << "Elements after deletion from the array" << endl;
    deleteElement(arr, n, k);

    return 0;
}

/*
If an array has n elements and all elements are inserted in binary
search tree than the tree has space complexity of O(n) and the array
has also the space complexity of O(n)
*/
