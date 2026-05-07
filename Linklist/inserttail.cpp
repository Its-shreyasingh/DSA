#include<iostream>
#include<vector>
using namespace std;
class Node{
    public :
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
Node* insertbeforetail(Node* head,int val)
{
    if(head->next==NULL)
    {
        return insertbeforetail(head,val);
    }
    Node* tail=head;
    while(tail->next!=NULL)
    {
        tail=tail->next;
    }
    Node* prev=tail->back;
    Node* newnode=new Node(val,tail,prev);
    prev->next=newnode;
    tail->back=newnode;
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
    int val=9;
    Node* head=convertarr2ll(arr);
    head=insertbeforetail(head,val);
    print(head);
    return 0;
}