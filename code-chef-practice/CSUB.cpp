#include <iostream>
using namespace std;
#define ll long long

int noOfSubstrings(int N, string str) {
    int i;
    ll noOfOnes = 0;
    for(i = 0; i < N; i++) {
        if(str[i] == '1') {
            noOfOnes++;
        }
    }
    return (noOfOnes * (noOfOnes+1))/2;
}

int main() {
    int noOfTests;
    cin >> noOfTests;
    while(noOfTests--) {
        int N;
        cin >> N; // # 
        int i;
        string str;
        cin >> str;
        cout << noOfSubstrings(N, str) << endl;
    } 
    return 0;
}

