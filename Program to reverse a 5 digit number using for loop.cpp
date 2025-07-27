/* NAME  - MAYANK YADAV
   PRN   - 24070123060
   CLASS - ENTC A-3
*/

#include <iostream>
using namespace std;

int main() {
    int n, reversed = 0;
    cout << "Enter a number: ";
    cin >> n;

    int original = n; 

    while (n > 0) {
        int digit = n % 10;
        cout << n << " : " << digit << endl;

        reversed = reversed * 10 + digit;
        n = n / 10;
    }

    cout << "\nReversed Number: " << reversed << endl;

    return 0;
}



/* OUTPUT 
Enter a number: 12345
12345 : 5
1234 : 4
123 : 3
12 : 2
1 : 1

Reversed Number: 54321
*/
