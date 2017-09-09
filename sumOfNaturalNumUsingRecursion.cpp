#include <iostream>
using namespace std;

int sumOfNaturalNumUsingRecursion(int N) {
    if(N == 1) { 
        return 1;
    } else {
       return sumOfNaturalNumUsingRecursion(N-1) + N; 
    }
    
}

int main() {
    int N;
    cin >> N;  
   cout << sumOfNaturalNumUsingRecursion(N) << endl; 
   return 0;
}

