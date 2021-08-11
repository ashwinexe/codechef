import java.util.*;

class CHFSPL{
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int t = s.nextInt();
        while(t-- > 0)
        {
            int a = s.nextInt();
            int b = s.nextInt();
            int c = s.nextInt();
            int greater1 = Math.max(a, b);
            int greater2 = Math.max(b, c);
            System.out.println(greater1+greater2);

        }

        s.close();
    }
}