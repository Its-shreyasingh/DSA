#include<iostream>
#include<vector>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node* back;

    public:
    Node(int data1,Node* next1,Node* back1)
    {
        data=data1;
        next=next1;
        back=back1;
    }
    public:
    Node(int data1)
    {
        data=data1;
        next=nullptr;
        back=nullptr;
    }
};
Node* convertarr2ll(vector<int> arr)
{
    Node* head=new Node(arr[0]);
    Node* prev=head;
    for(int i=1;i<arr.size();i++)
    {
        Node* temp=new Node(arr[i],nullptr,prev);
        prev->next=temp;
        prev=temp;
    }
    return head;
}
Node* insertkthelement(Node* head,int val,int k)
{
    if(k==1)
    {
        return insertkthelement(head,val,k);
    }
    Node* temp=head;
    int count=0;
    while(temp!=NULL)
    {
        count++;
    
    if(count==k)
    {
        break;
    }
    temp=temp->next;
    }
    Node* prev=temp->back;
    Node*newnode=new Node(val,temp,prev);
    prev->next=newnode;
    temp->back=newnode;
    return head;
}
void print(Node* head)
{
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
}
int main()
{
    vector<int> arr={1,2,3,4};
    int val=10;
    int k=3;
    Node* head=convertarr2ll(arr);
    head=insertkthelement(head,val,k);
    print(head);
}