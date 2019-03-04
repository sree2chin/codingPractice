#include <iostream>
#include <string>
using namespace std;
#define ll long long

ll noOfSubstrings(int N, string str) {
    int i;
    ll noOfOnes = 0;
    for (i = 0; i < N; i++) {
        if (str[i] == '1') {
            noOfOnes++;
        }
    }
    return (ll)((ll)(noOfOnes * (noOfOnes+1))/2);
}

int main() {
    int noOfTests;
    cin >> noOfTests;
    while (noOfTests > 0) {
        int N;
        cin >> N; // # 
        int i;
        string str;
        cin >> str;
        cout << noOfSubstrings(N, str) << endl;
        noOfTests--;
    } 
    return 0;
}