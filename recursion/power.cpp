#include <iostream>
using namespace std;

int power(int x, int n) {
	// base cases
	if(n == 0) {
		return 1;
	}
    else if(n == 1) { 
        return x;
    } 
    // base cases end
    // improvement would be to add
    // int temp = power(x, n/2); and use this line in the below statements.
    else if(n%2 == 0) {
    	return power(x, n/2) * power(x, n/2);
    } 
    else {
    	return power(x, n/2) * power(x, n/2) * x; 
    }

}

int main() {
    int x, n;
    cout << "Please enter number" << endl;
    cin >> x;
    cout << "Please enter power" << endl;
    cin >> n;
   cout << power(x, n) << endl;
   return 0;
}

