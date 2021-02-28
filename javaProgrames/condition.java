import java.util.Scanner;
public class condition{
  public static void main(String[] args) {
    System.out.println("Enter a number");
     Scanner sc = new Scanner(System.in);
     int firstNum = sc.nextInt();

    for (int i=0;i<=firstNum ;i++ ) {
      for (int j=0;j<=i ;j++ ) {
           System.out.print("*");
      }
      System.out.println("\n") ;
    }



  }
}
