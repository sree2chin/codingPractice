#include <iostream>
#include <stack>
#include <string>
using namespace std;

int getLengthOfMaxValidPrefix(string str) {
    // use stack from stl
    stack<char> st;
    long long max = 0;
    long long innerMax = 0;

    int strLength = str.length();
    if(strLength <= 1) {
        return 0;
    } else {
        long long int i = 0;
        while(i < strLength) {
            innerMax = 0;
            if(str[i] == '<') {
                st.push(str[i]);
                i++;
            } else {
                if(st.empty()) {
                    i++;
                } else {
                    while(!st.empty()) {
                        st.pop();
                        i++;
                        innerMax++;
                    }  
                }
                
                if(innerMax > max) {
                    max = innerMax;
                }
            }
        }
    }
    return max * 2;
}

// driver 
int main() {
    int noOfTests;
    cin >> noOfTests;
    while (noOfTests > 0) {
        string str;
        cin >> str;
        cout << getLengthOfMaxValidPrefix(str) << endl;
        noOfTests--;
    } 
    return 0;
}