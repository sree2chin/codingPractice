#include <iostream>
using namespace std;

int T[100];

/* Function to initialize 1 values in T table */
void _initialize(int n)
{
  int i;
  for (i = 0; i < n; i++) {
    T[i] = 1;
  }
}

int lis(int A[], int n) {
    int i = 1;
    int j = 0;
    while(j < n) {
      if(i == j) {
        j = 0;
        i++;
      }
      if( (A[i] > A[j]) && (T[i] <= T[j]) ) {
        T[i] = T[j] + 1;
      } 
      j++;
    }
    int k;
    int max = T[0];
    for(k = 1; k < n; k++) {
      if(T[k] > max) {
        max = T[k];
      }
    }
    return max;
}

int main() {
   int N = 5;
   // int A[7] = {3, 4, -1, 0, 6, 2, 3};
   int A[] = {2, 5, 1, 8, 3};
   _initialize(N);
   cout << "......" << lis(A, N) << endl;
   return 0;
}

