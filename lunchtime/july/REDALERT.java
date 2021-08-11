import java.util.Scanner;

public class REDALERT {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int t = s.nextInt();
        while(t-- > 0)
        {
            int n = s.nextInt();
            int d = s.nextInt();
            int h = s.nextInt();
            int level=0;
            int arr[] = new int[n];
            for(int i=0; i<n; i++)
            {
                arr[i] = s.nextInt();
            }
            boolean flag = false;
            for(int i=0; i<n; i++)
            {
                if(arr[i] != 0)
                {
                    level += arr[i];
                    if(level > h)
                    {
                        System.out.println("YES");
                        flag = true;
                    }
                }
                else
                    level -= d;
            }
            if(flag = false)
            System.out.println("NO");
        }
        s.close();
    }
}
