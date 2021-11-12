#include <iostream>
using namespace std;

int powerOf(int a,int b){
    if(b==0) return 1;
    if(b==1) return a;
    
    return a*powerOf(a,b-1);
}
int main()
{
    int a,b;
    cout << "Enter the base value and power : ";
    cin >> a >> b;
    
    int d=powerOf(a,b);
    cout << d << endl;

    return 0;
}
