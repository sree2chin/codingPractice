#include <iostream>
#include <string>
using namespace std;

// consider B as Auxiliary
void toh(int n, string from, string aux, string to) { 
    if(n == 1) { 
      cout << "move disk "; cout << n; cout << " from "; cout << from; cout << " to "; cout << to; cout << endl;
      return;
    }
    toh(n-1, from, to, aux);
    cout << "move disk "; cout << n; cout << " from "; cout << from; cout << " to "; cout << to; cout << endl;
    toh(n-1, aux, from, to);
}

int main() {
    int x;
    cout << "Please enter number" << endl;
    cin >> x;
    toh(x, "A", "B", "C");
    return 0;
}

