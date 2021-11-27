#include<bits/stdc++.h>
using namespace std;

int main(){
  int a,b;
  cin >> a >> b;
  a=a^b;
  b=a^b;
  a=a^b;
  cout << "Number after swapping " << a << b << endl;
  return 0;
}
