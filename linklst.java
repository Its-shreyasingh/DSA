class Node
{
    int data;
    Node next;

    public Node(int data1,Node next1) {
        this.data=data1;
        this.next=next1;
    }
    Node(int data1)
    {
        this.data=data1;
        this.next=null;
    }
}
public class linklst {
    public static void main(String[] args)
    {
        int[] arr={2,3,5,6};
        Node y=new Node(arr[1]);
        System.out.println(y.data);
    }
}
