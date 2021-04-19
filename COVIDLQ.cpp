#include<iostream>
#include<stdio.h>
#include<cstdlib>
using namespace std;
 void print_array(int n, int A[]);

 int main()
 {
     int t;
     cin >> t;

     while(t--)
     {
         int n, counter=0,output=1,p=0,distance=0;
         cin >> n;
            int A[n];
            for(int i=0; i<n; i++)
            {
                cin >> A[i];
                
                if(A[i] == 1)
                {
                    distance = abs(p - i);

                    cout << distance;
                    p = i;

                   

                }
                 if(distance <6 && distance > 0)
                    {
                        cout << "NO" << endl;
                        break;
                    }

                else 
                {
                    cout << "YES" << endl;
                    break;
                }

            }
            print_array(n, A);


     }
 }

 void print_array(int n, int A[])
 {
     for(int i=0; i<n; i++)
     cout << A[i] << " ";
 }

