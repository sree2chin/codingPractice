#include <iostream>

using namespace std;

int findIndexOfMax(int A[], int N, int noOfSteps) {
    int max = A[0];
    int maxIndex = 0;
    bool sameElements = true;
    int i;
    for(i = 1; i < N; i++) {
        if(A[0] != A[i]) {
            sameElements = false;
        }
        if(max < A[i]) {
            max = A[i];
            maxIndex = i;
        }
    }
    if(sameElements == true) {
        return noOfSteps;
    } else {
        for(i = 0; i < N; i++) {
            if(i != maxIndex) {
                A[i]++;
            }
        }
        return findIndexOfMax(A, N, noOfSteps+1);
    }
}

int noOfSteps(int N, int A[]) {
    if(N == 1) {
        return 0;
    }
    return findIndexOfMax(A, N, 0);
}

int main() {
    int noOfTests;
    cin >> noOfTests;
    while(noOfTests > 0) {
        int N;
        cin >> N; // # of workers
        int i;
        int A[N];
        for (i = 0; i < N; i++)
        {
            cin >> A[i];
        }
        cout << noOfSteps(N, A) << endl;
        noOfTests--;
    } 
    return 0;
}

