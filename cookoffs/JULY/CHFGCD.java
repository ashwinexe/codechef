import java.util.Scanner;

public class CHFGCD {
    public static void main(String[] args) {
        Scanner s= new Scanner(System.in);
        int t = s.nextInt();
        while(t-- > 0)
        {
            int x = s.nextInt();
            int y = s.nextInt();
            checkGcd(x,y, 0);
        }

    }

    public static int gcd(int x, int y) {
        if(y == 0)
            return x;
        else
           gcd(y, x%y);

        return 0;

    }

    public static void checkGcd(int a, int b, int cnt) {
        if(gcd(a,b) != 0)
        {
            System.out.println(cnt);
            return;
        }
        checkGcd(a++, b, cnt++);
        checkGcd(a, b++, cnt++);
    }

}
