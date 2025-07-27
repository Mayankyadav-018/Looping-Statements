/* NAME - MAYANK YADAV
   PRN - 24070123060
   CLASS - ENTC A-3 */

#include <iostream>
#include <string>
using namespace std;

int main() {
    string user_defined_password;
    string input_password;
    bool has_special = false;

    cout << "\n=============================================\n";
    cout << "|       # Secure Access Initialization #     |\n";
    cout << "=============================================\n";
    cout << "| Create a secure password.                  |\n";
    cout << "| Requirements:                              |\n";
    cout << "| - At least 4 characters                    |\n";
    cout << "| - Must contain a special character         |\n";
    cout << "|   Allowed: @, #, $, %, &, !                |\n";
    cout << "---------------------------------------------\n";

    cout << "Create your password: ";
    cin >> user_defined_password;

    // Check length
    if (user_defined_password.length() < 4) {
        cout << "\nPassword too short. Must be at least 4 characters.\n";
        return 0;
    }

    for (int i = 0; i < user_defined_password.length(); i++) {
        char ch = user_defined_password[i];
        if (ch == '@' || ch == '#' || ch == '$' || ch == '%' || ch == '&' || ch == '!') {
            has_special = true;
            break;
        }
    }

    if (!has_special) {
        cout << "\nPassword must include at least one special character (@, #, $, %, &, !).\n";
        return 0;
    }

    cout << "\n\n=============================================\n";
    cout << "|         >> Authentication Required <<      |\n";
    cout << "=============================================\n";
    cout << "Enter your password to unlock the system: ";
    cin >> input_password;

    while (true) {
        if (input_password != user_defined_password) {
            cout << "\n Access Denied: Incorrect Password.\n";
            cout << "Try again: ";
            cin >> input_password;
        } else {
            cout << "\n Access Granted. System Unlocked \n";
            break;
        }
    }

    cout << "\n=============================================\n";
    cout << "|       Session Terminated. Stay Secure.    |\n";
    cout << "=============================================\n";
}




/* OUTPUT 
=============================================
|       # Secure Access Initialization #     |
=============================================
| Create a secure password.                  |
| Requirements:                              |
| - At least 4 characters                    |
| - Must contain a special character         |
|   Allowed: @, #, $, %, &, !                |
---------------------------------------------
Create your password: 627@


=============================================
|         >> Authentication Required <<      |
=============================================
Enter your password to unlock the system: 627

 Access Denied: Incorrect Password.
Try again: 627@

 Access Granted. System Unlocked 

=============================================
|       Session Terminated. Stay Secure.    |
=============================================


=== Code Execution Successful === */               
