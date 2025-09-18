import java.util.*;
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
    private static Node convertarr2ll(int [] arr)
    {
        Node head=new Node(arr[0]);
        Node mover=head;
        for(int i=1;i<arr.length;i++)
        {
            Node temp=new Node(arr[i]);
            mover.next=temp;
            mover=temp;
        }
        return head;
    }
    private static int lengthofll(Node head)
    {
        int count=0;
        Node temp=head;
        while(temp !=null)
        {
            temp=temp.next;
            count++;
        }
        return count;
    }
    private static int checkforval(Node head,int val)
    {
        Node temp=head;
        while(temp !=null)
        {
            if(temp.data==val)
            {
                return 1;
                
            }
            temp=temp.next;
        }
        return 0;
    }
    public static void main(String[] args)
    {
        Scanner sc=new Scanner(System.in);
        int[] arr={2,3,5,6,3,5,8};
        Node head=convertarr2ll(arr);
        System.out.println("Enter the value to be searched");
        int val=sc.nextInt();
        int result=checkforval(head,val);
        if(result==1){
            System.out.println("Value searched in linklist is present");
        }
        else{
            System.out.println("Value searched in linklist is not present");
        }
        
    }
}
