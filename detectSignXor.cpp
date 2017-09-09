#include <iostream>
using namespace std;

bool areSignsDifferent(int a, int b) {
    cout << ((a^b) < 0);
    return (a^b) < 0;
}

int main() {
    int x,y;
    cout << "enter two number" << endl;
    cin >> x;
    cin >> x;
   cout << areSignsDifferent(x, y) << endl; 
   
   return 0;
}

