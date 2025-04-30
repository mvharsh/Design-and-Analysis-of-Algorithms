#include <iostream>
using namespace std;

class Node
{
    public:
        int data;
        Node* left;
        Node* right;
};

Node* insNode(Node* root, int key)
{
    Node* newnode = new Node();
    newnode->data = key;
    newnode->left = NULL;
    newnode->right = NULL;

    Node* x = root;
    Node* y = NULL;

    if (root == NULL)
    {
        root = newnode;
        return root;
    }
    while (x != NULL)
    {
        y = x;
        if (key < x->data)
            x = x->left;
        else
            x = x->right;
    }
    if (y == NULL)
    {
        y = newnode;
        return root;
    }
    else if (key < y->data)
    {
        y->left = newnode;
        return root;
    }
    else
    {
        y->right = newnode;
        return root;
    }
}
void postorder(Node* n){
    if (n != NULL){
        postorder(n->left);
        postorder(n->right);
        cout << n->data << " ";
    }
}

int main()
{
    Node* root = NULL;
    int ch, a, b, count;
    cout << "1.Insert a Node \n";
    cout << "2.Postorder Traversal \n";
    cout<<  "3.Exit\n";
     do{
        cout << "\nEnter your choice : ";
        cin >> ch;
        switch(ch)
        {
            case (1):
                cout << "Enter the value to be Inserted to the Tree : ";
                cin >> a;
                root = insNode(root, a);
                break;

            case(2):
                postorder(root);
                cout<<endl;
                break;

            case (3):
                break;
        }
    }while(ch != 3);
    return 0;
}
