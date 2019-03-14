#include <iostream>
using namespace std;
#define ll long long

unsigned long int getMaxNumber(unsigned long int A[], int len) {
    unsigned long int max = A[0];
    unsigned int i;
    for(i = 1; i < len; i++) {
        if(A[i] > max) {
            max = A[i];
        }
    } 
    return max;
}

int main() {
    unsigned int n, m;
    cin >> n;
    unsigned int i;
    unsigned long int A[n];
    for (i = 0; i < n; i++) {
        A[i] = 0;
    }
    cin >> m;

    while (m > 0) {
        unsigned int a, b, i;
        unsigned long int k;
        cin >> a; 
        cin >> b;
        cin >> k;
        for(i = a-1; i <= b-1; i++) {
            A[i] += k;
        }
        m--;
    } 
    cout << getMaxNumber(A, n) << endl;
    return 0;
}