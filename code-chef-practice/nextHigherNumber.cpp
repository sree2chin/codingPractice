#include <iostream>
using namespace std;
#include <algorithm>

// print number
void printArray(int N, int A[]) {
    int i;
    for(i = 0; i < N; i++) {
        cout << A[i];
    }
    cout << endl;
}

void findNextHigherNum(int N, int A[]) {
    int i = N - 1;
    int j;
    int p1, p2;
    for (i = N - 1; i > 0; i--)  { 
        if (A[i] > A[i - 1]) { 
            break; 
        } 
    } 
    
    if(i == 0) {
        cout << "-1" << endl;
    } else {
        p1 = i - 1; // first number which violates ascending order.
        p2 = i; // next smallest number
        if(i != N - 1) {
           for(j = i + 1; j < N; j++) {
                if(A[j] > A[p1] && A[j] < A[p2]) {
                    p2 = j;
                }
            } 
        }
        
        //swap
        int temp = A[p1];
        A[p1] = A[p2];
        A[p2] = temp;

        sort(A + p1+1, A + N); 

        printArray(N, A);
    }
    
}

int main() {
    int noOfTests;
    cin >> noOfTests;
    while (noOfTests > 0) {
        int N;
        cin >> N; //n # 
        int i;
        int A[N];
        for (i = 0; i < N; i++)
        {
            cin >> A[i];
        }
        findNextHigherNum(N, A);
        noOfTests--;
    } 
    return 0;
}