import java.util.Scanner;

public class HackerRank_Java_Static_Initializer_Block {

    public static final Scanner scn = new Scanner(System.in);
    public static final int b = scn.nextInt();
    public static final int h = scn.nextInt();
    public static final int area = h*b;
    public static Boolean flag = true;

    static {
         try {
             if (b <= 0 ||  h <= 0) {
                 flag = false;
                 throw new Exception("Breadth and height must be positive");
             }
         } catch (Exception exception) {
             String exceptionString = exception.toString();
             System.out.println(exceptionString);
         }
    }

    public static void main(String[] args) {
        if (flag) {
            System.out.println(area);
        } 
    }
}
