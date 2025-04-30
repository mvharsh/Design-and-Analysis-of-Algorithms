#include<iostream>
using namespace std;

class node
{
 public:
 int data;
 node* next;
};

node* print(node* h)
{
 cout<<"Linked List: ";
 while(h!=NULL)
 {
    cout<<h->data<<" ";
    h = h->next;
 }
 cout<<endl;
}

node* insertt(node* root, int data)
{
 node* nn = new node();
 nn->data = data;
 nn->next = NULL;
 if(root==NULL)
 {
  return nn;
 }
 else
 {
  node* cur = root;
  while(cur->next!=NULL)
    cur=cur->next;
  cur->next=nn;
  return root;
 }
}

int main()
{
    node* root = NULL;
    root = insertt(root,11);
    root = insertt(root,13);
    root = insertt(root,15);
    root = insertt(root,17);
    root = insertt(root,19);
    print(root);
    return 0;
}

// Time Complexity = O(n)
// Space complexity = O(1)
