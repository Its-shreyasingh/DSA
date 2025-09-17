import java.util.Scanner;
public class recursion {
    public static int fib(int i,int n)
    {
        if(i>n){
            return -1;                                                 //name n no of times
        }
        else{
            System.out.println("Shreya");
        }
        return fib(i+1,n);
    }
    public static void main(String[] args) {
        {
            Scanner sc=new Scanner(System.in);
            System.out.println("Enter the Number of times the name has to be printed");
            int n=sc.nextInt();
            fib(1,n);
        }
    }
}





// import java.util.Scanner;
// public class recursion
// {
//     public static int fib(int i,int n)
//     {
//         if(i>n)
//         {
//             return -1;
//         }                                                                    // numbers 1 to n
//         else{
//             System.out.println(i);
//         }
//         return fib(i+1,n);
//     }
//     public static void main(String [] args)
//     {
//         Scanner sc=new Scanner(System.in);
//         System.out.println("Enter the limit to which number has to be printed");
//         int n=sc.nextInt();
//         fib(1,n);
        
//     }
// }


// import java.util.Scanner;
// public class recursion
// {
//     public static int fib(int i,int sum)
//     {
        
//         if(i<1)                                                        //Sum of n numbers
//         {
//             System.out.print(sum);
//             return -1;
//         }
//         return fib(i-1,sum+i);
//     }
//     public static void main(String [] args)
//     {
//         Scanner sc=new Scanner(System.in);
//         System.out.println("Enter the limit to which number has to be printed as sum");
//         int i=sc.nextInt();
//         int sum=0;
//         System.out.println("Sum of numbers is:");
//         fib(i,sum);
        
//     }
// }