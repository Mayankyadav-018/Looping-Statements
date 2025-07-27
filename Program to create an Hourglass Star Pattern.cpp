/* NAME  - MAYANK YADAV
   PRN   - 24070123060
   CLASS - ENTC A-3
*/



#include <iostream>
using namespace std;

int main() {
    int i,j,k;
    int n=5;
    for(i = 1; i<=n-1;i++){
        
        for(j=-1;j<i;j++){
            cout << " ";
        }
            for(k=1;k<=n-i+1;k++){
                cout << "* ";
        }
        cout << endl;
    }
    for(i = n; i>=1;i--){
        for(j=1;j<=i+1;j++){
            cout << " ";
        }
            for(k=1;k<=n-i+1;k++){
                cout << "* ";
        }
        cout << endl;
    }

    return 0;
}



/* OUTPUT
  * * * * * 
   * * * * 
    * * * 
     * * 
      * 
     * * 
    * * * 
   * * * * 
  * * * * *    */
