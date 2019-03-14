#include <iostream>
using namespace std;

unsigned int findGcd(unsigned int a, unsigned int b) {
    if(b == 0) {
        return a;
    } else {
        return findGcd(b, a % b);    
    }
}
void printRotatedArray(unsigned int A[], unsigned int n, unsigned int d) {
    unsigned int gcdOfNums = findGcd(n, d);
    unsigned int noOfParts = n/gcdOfNums;
    cout << "gcd " << gcdOfNums << endl;
    cout << "noOfParts " << noOfParts << endl;
    unsigned int i, j, k;
    for(i = 0; i < gcdOfNums; i++) {
        unsigned int temp = A[i];
        j = i;
        k = 0;
        while(k < noOfParts - 1) {
            A[j] = A[j+gcdOfNums]; 
            j += gcdOfNums; 
            k++;
        }
        A[j] = temp; 
    } 
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