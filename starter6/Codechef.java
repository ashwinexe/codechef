/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-- >= 0)
        {
            int r1,w1,c1,r2,w2,c2;
            int a=0,b=0;
            r1 = sc.nextInt();
            w1 = sc.nextInt();
            c1 = sc.nextInt();
            r2 = sc.nextInt();
            w2 = sc.nextInt();
            c2 = sc.nextInt();
            if(r1 > r2) a++;
            else b++;
            if(w1 > w2) a++;
            else b++;
            if(c1 > c2) a++;
            else b++;
            
            if(a >b)
            System.out.println("A");
            else
            System.out.println("B");
            sc.close();
        }
	}
}
