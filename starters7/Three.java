import java.util.*;
public class Three {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int t = s.nextInt();
        double x=0;
        double ans;
        while(t-- >0) {
            double a = s.nextInt();
            double b = s.nextInt();
            if(a == b){
                System.out.println(0);
                continue;
            }
            else if(a>b)x=a-1;
            else x = b-1;
            ans = Math.ceil((b-x)/2) + Math.ceil((x-a)/2);
            System.out.println((int)ans); 
        }

        s.close();
    }
}
