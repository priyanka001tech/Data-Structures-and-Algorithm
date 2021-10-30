#include <iostream>
using namespace std;
 
void towerOfHanoi(int n, char src, char dest, char helper)
{
    if (n == 1){
        cout << "Move disk 1 from rod " << src << " to rod " << dest << endl;
        return;
    }
    towerOfHanoi(n - 1, src, helper, dest);
    cout << "Move disk " << n << " from rod " << src << " to rod " << dest << endl;
    towerOfHanoi(n - 1, helper, dest, src);
}
 
int main(){
    int n ;
    cout << "Enter the number of disks: ";
    cin >> n;
    towerOfHanoi(n, 'A', 'C', 'B');
    return 0;
}
