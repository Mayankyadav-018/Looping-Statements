/* NAME  - MAYANK YADAV
   PRN   - 24070123060
   CLASS - ENTC A-3
*/



#include <iostream>
using namespace std;

int main() {
    char ch = 'A';
    int rows = 4;   

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }

    return 0;
}



/* OUTPUT 
A 
B C 
D E F 
G H I J   */
