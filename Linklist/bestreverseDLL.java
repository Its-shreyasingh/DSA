class Node{
    int data;
    Node next;
    Node back;
    Node(int data1,Node next1,Node back1)
    {
        this.data=data1;
        this.next=next1;
        this.back=back1;
    }
    Node(int data1)
    {
        this.data=data1;
        this.next=null;
        this.back=null;
    }
}
public class bestreverseDLL {
    private static Node convertarr2ll(int[] arr)
    {
        Node head=new Node(arr[0]);
        Node prev=head;
        for(int i=1;i<arr.length;i++)
        {
            Node temp=new Node(arr[i],null,prev);
            prev.next=temp;
            prev=temp;
        }
        return head;
    }
    private static void print(Node head)
    {
        while(head!=null)
        {
            System.out.print(head.data +" ");
            head=head.next;
        }
    }
    private static Node reverse(Node head)
    {
        Node current=head;
        Node last=null;
        while(current!=null){
            last=current.back;
            current.back=current.next;
            current.next=last;
            current=current.back;
        }
        head=last.back;
        return head;
    }
    public static void main(String[] args)
    {
        int[] arr={1,2,3,4};
        Node head=convertarr2ll(arr);
        System.out.println("Original LL:");
        print(head);
        System.out.println(" ");
        head=reverse(head);
        System.out.println("Reversed LL:");
        print(head);
    }
}
