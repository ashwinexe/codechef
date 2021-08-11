import java.util.*;

class PROBDIFF{
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int t = s.nextInt();
        while(t-- > 0)
        {
            Set <Integer> ans = new HashSet<Integer>();
            // int a1,a2,a3,a4;
            // a1 = s.nextInt();
            // a2 = s.nextInt();
            // a3 = s.nextInt();
            // a4 = s.nextInt();
            ans.add(s.nextInt());
            ans.add(s.nextInt());
            ans.add(s.nextInt());
            ans.add(s.nextInt());
            System.out.println(ans.size()/2);

        }
        s.close();
    }
}