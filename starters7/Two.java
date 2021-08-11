import java.util.Scanner;
import java.util.*;
public class Two {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int t = s.nextInt();
        while(t-- > 0) {
            int e = s.nextInt();
            int k = s.nextInt();
            int cnt=1;
            
            while(Math.floor(e/k) > 0)
            {
                cnt ++;
                e /= k;

            }
            System.out.println(cnt);
        }

        s.close();
    }
}
