#include <iostream>

using namespace std;

int getIndex(int A[], int N, int M) {
    for(int j = N-1; j >= 0; j--) {
        if(A[j] == M){
            return j+1;
        }
    }
    return -1;
}

int main() {
    int N,M;
    
    cin >> N;
    cin >> M;
    
    int A[N];
    
    for (int i = 0; i < N; ++i)
    {
        cin >> A[i];
    }
    
   cout << getIndex(A, N,M) << endl; 
   
   return 0;
}

