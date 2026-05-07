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
void print(Node* head)
{
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
}

Node* middleNode(Node* head) {
        Node* temp=head;
        int count=0;
        while(temp!= NULL)
        {
            count++;
            temp=temp->next;
        }
        int midnode=(count/2)+1;
        temp=head;
        while(temp!= NULL)
        {
            midnode=midnode-1;
            if(midnode==0)
            {
                break;
            }
            temp=temp->next;
        }
        return temp;
    }
int main()
{
    vector<int> arr={1,2,3,4,5,6,7,8,9,10};
    Node* head=convertarr2ll(arr);
    cout<<("Middle of the Single LL : ");
    head=middleNode(head);
    print(head);
    return 0;
}