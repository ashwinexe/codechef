#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    int t;
    cin >>t;
    while(t--) {
        double a,b;
        cin >> a >> b;
        double ans =  (a+b)/6;
        cout <<setprecision(10)<< ans << endl;
    }
   double x = 2.3654789d;
   cout << "Print up to 3 decimal places: " << setprecision(3) << x << endl;
   cout << "Print up to 2 decimal places: " << setprecision(2) << x << endl;
   cout << "Print up to 7 decimal places: " << setprecision(7) << x << endl;
}