import java.util.*;
class SHOEFIT{
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int t = s.nextInt();
        while(t-- > 0)
        {
            int a = s.nextInt();
            int b = s.nextInt();
            int c = s.nextInt();
            int sum = a+b+c;
            if(sum == 2 || sum == 1)
                System.out.println(1);
            else
                System.out.println(0);
        }
    }
}