#include <iostream>
using namespace std;

void swap(unsigned int A[], unsigned int i, unsigned int j) {
    unsigned int temp = A[i];
    A[i] = A[j];
    A[j] = temp;
}

void rotate(unsigned int A[], unsigned int s, unsigned int e) {
    while(s < e) {
        swap(A, s++, e--);
    }
}

void printRotatedArray(unsigned int A[], unsigned int n, unsigned int d) {
    unsigned int i, s, e;
    s = 0; e = d;
    rotate(A, 0, d-1);
    rotate(A, d, n-1);
    rotate(A, 0, n-1);
    for(i = 0; i < n; i++) {
        cout << A[i] << " ";
    }
    cout << endl;
}

int main() {
    unsigned int n, d;
    cin >> n;
    cin >> d;
    unsigned int i;
    unsigned int A[n];
    for (i = 0; i < n; i++) {
        cin >> A[i];
    }
    printRotatedArray(A, n, d);
    return 0;
}