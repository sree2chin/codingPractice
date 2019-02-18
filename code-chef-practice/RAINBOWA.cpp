#include <iostream>

using namespace std;

string findIfRainbowArr(int N, int A[]) {
    int left = 0;
    int right = N - 1;
    while(left < right) {
        if(A[left] == A[right] && ((A[left+1] - A[left]) <=1) &&  ((A[right-1] - A[right]) <=1)) {
            left++; 
            right--;
        } else {
            return "no";
            break;
        }
    }
    return "yes";
}

int main() {
    int noOfTests;
    cin >> noOfTests;
    while(noOfTests--) {
        int N;
        cin >> N; // # of workers
        int i;
        int A[N];
        for (i = 0; i < N; i++)
        {
            cin >> A[i];
        }
        cout << findIfRainbowArr(N, A) << endl;
    } 
    return 0;
}

