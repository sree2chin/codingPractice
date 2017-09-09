#include <iostream>
#include <algorithm>

using namespace std;

int binarySearch(int A[], int N, int key) {
    int low = 0;
    int high = N - 1;
    /* To convert recursion to iterative, simple way to remember is 
       to move the base if condition to while() in most cases*/
    while(low <= high) {
        int mid = (low+high)/2;
        if(key < A[mid]) {
            high = mid - 1;
        } else if(key > A[mid]){
            low = mid + 1;
        } else {
            return mid;
        }
    }
    return -1;
}

int main() {
    int N,q;
    
    cin >> N;
    
    int A[N];
    
    
    for (int i = 0; i < N; ++i)
    {
        cin >> A[i];
    }
    cin >> q;
    int B[q];
    for (int i = 0; i < q; ++i)
    {
        cin >> B[i];
    }
    // sort
    sort(A, A+N);
    for(int i = 0; i < q; i++) {
        cout << binarySearch(A, N, B[i])+1 <<endl;
    }
       
   return 0;
}

