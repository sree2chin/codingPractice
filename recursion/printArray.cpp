#include <iostream>
using namespace std;

void printArray(int A[], int n) {
    if(n == 0) { 
        return;
    } else {
       cout << A[n-1] << endl; 
       printArray(A, n-1);
    }
}

void printArrayAsc(int A[], int n) {
	if(n == 0) {
		return;
	} else {
       printArrayAsc(A, n-1);
       cout << A[n-1] << endl; 
	}
}

int main() {
    int A[5] = {34, 5, 4 , 3, 2};
   printArray(A, 5); 
   cout << "......" << endl;
   printArrayAsc(A, 5);
   return 0;
}

