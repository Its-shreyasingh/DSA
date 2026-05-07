import java.util.Stack;     //This is brute force method which gives high time complexity

class Node{
    int data;
    Node next;
    Node back;
    Node(int data1,Node next1,Node back1){
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
public class reverseDLL{
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
        System.out.println();
    }
    public static Node reverse(Node head)
    {
        if(head==null ||head.next==null)
        {
            return head;
        }
        Stack<Integer> s=new Stack<>();
        Node current=head;
        while (current != null) {
        s.push(current.data);
        current = current.next;
    }
        current=head;
        while(current!=null)
        {
            current.data=s.pop();
            current=current.next;
        }
        return head;
    }
    public static void main (String[] args)
    {
    int[] arr={1,2,3,4};
    Node head=convertarr2ll(arr);
    System.out.println("Original DLL:");
    print(head);
    head=reverse(head);
    System.out.println("Reversed DLL:");
    print(head);
}
}
