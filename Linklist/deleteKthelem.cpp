#include<iostream>
#include<vector>
using namespace std;
class Node{
    public:
    int data;
    Node*next;
    Node*back;

    public: Node(int data1,Node* next1,Node* back1)
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
Node* deletehead(Node* head)
{
    if(head==NULL ||head->next==NULL)
    {
        return NULL;
    }
    Node* prev=head;
    head=head->next;
    head->back=nullptr;
    prev->next=nullptr;
    delete prev;
    return head;
}
Node* deletetail(Node* head)
{
    if(head==NULL ||head->next==NULL)
    {
        return NULL;
    }
        
        Node* tail=head;
        while(tail->next!=NULL)
        {
            tail=tail->next;
        }
        Node* newtail=tail->back;
        newtail->next=nullptr;
        tail->back=nullptr;
        delete tail;
        return head;
}
Node* deleteKthelement(Node* head,int k)
{

    if(head==NULL)
    {
        return NULL;
    }
    Node* kNode=head;
    int count=0;
    while(kNode !=NULL)
    {
        count++;
        if(count==k){
            break;
        }else{ kNode=kNode->next;
        }
    }
        Node* prev=kNode->back;
        Node* front=kNode->next;
        if(prev==NULL &&front==NULL)
        {
            delete kNode;
            return NULL;
        }
        else if(prev==NULL){
            return deletehead(head);
        }
        else if(front==NULL)
        {
            return deletetail(head);
        }
        prev->next=front;
        front->back=prev;
        kNode->next=nullptr;
        kNode->back=nullptr;
        delete kNode;
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
    vector<int> arr={11,25,31,41,51,61};
    int k=1;
    Node* head=convertarr2ll(arr);
    head=deleteKthelement(head,k);
    print(head);
    return 0;
}