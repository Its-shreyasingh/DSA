#include<iostream>
#include<vector>
using namespace std;
class Node
{
    public :
    int data;
    Node* next;
    Node* back;

    public :
    Node(int data1,Node* next1,Node*back1)
    {
        data=data1;
        next=next1;
        back=back1;
    }
    public: Node(int data1)
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
Node* inserthead(Node* head,int val)
{
    Node* newhead=new Node(val,head,nullptr);
    head->back=newhead;
    return newhead;
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
    vector<int> arr={2,3,4,5};
    int val=8;
    Node* head=convertarr2ll(arr);
    head=inserthead(head,val);
    print(head);
    return 0;
}