#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;

    Node(int data)
    {
        this->data=data;
        this->next=NULL;
    }
};

// Deletion
// Node* deleteAtK(Node* h,int k)
// {
//     Node* head=h;
//     if(k==1)
//     {
//         return head->next;
//     }
//     for(int i=1;i<k-1;i++)
//     {
//         head=head->next;
//     }
//     head->next=head->next->next;
//     return h;
// }

// Insertion
Node* insertAtK(Node* h,Node* root,int k)
{
    Node* head=h;
    if(k==1)
    {
        root->next=h;
        return root;
    }
    for(int i=1;i<k-1;i++)
    {
        head=head->next;
    }
    root->next=head->next;
    head->next=root;

    return h;
}

// Reverse a linked list
void reverseLL(Node* head)
{
    stack<int> s;

    Node* temp=head;

    while(temp!=NULL)
    {
        s.push(temp->data);
        temp=temp->next;
    }

    while(!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }
}

int main()
{
    vector<int> v;
    for(int i=0;i<5;i++) v.push_back(i+1);

    Node* n1= new Node(v[0]);
    Node* n2= new Node(v[1]);
    Node* n3= new Node(v[2]);
    Node* n4= new Node(v[3]);
    Node* n5= new Node(v[4]);

    n1->next=n2;
    n2->next=n3;
    n3->next=n4;
    n4->next=n5;

    reverseLL(n1);
}