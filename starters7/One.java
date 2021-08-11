import java.util.*;
class One {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int t = s.nextInt();
        while(t-- > 0)
        {
            int a = s.nextInt();
            int b = s.nextInt();
            int sum = a+b;
            if(sum < 3) System.out.println(1);
            else if(sum >=3 && sum <=10) System.out.println(2);
            else if(sum>=11 && sum <=60) System.out.println(3);
            else System.out.println(4);
        }

        s.close();
    }
}