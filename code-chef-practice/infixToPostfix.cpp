#include <iostream>
#include <stack>
using namespace std;
#include <algorithm>

//Function to return precedence of operators 
int getPrecedence(char c) { 
    if (c == '+') {
        return 1;
    } else if (c == '-') {
        return 2;
    } else if (c == '*') {
        return 3;
    } else if (c == '/') {
        return 4;
    } else if (c == '^') {
        return 5;
    } else {
        return -1;
    }
} 

void printPostFixNotation(string str) {
    // use stack from stl
    stack<char> st;
    // st.push('s');
    int strLength = str.length();
    string result;
    int i;
    for (i = 0; i < strLength; i++) {
        if(str[i] >= 'a' && str[i] <= 'z') {
            result = result + str[i];
        } else if (str[i] == '(') {
            st.push(str[i]);
        } else if (str[i] == ')') {
            while(!st.empty() && st.top() != '(') { // pop all elements until u find opening (
                result += st.top();
                st.pop();
            }
            if(!st.empty()) { // remove extra '('
                st.pop();
            }
        } else {   // operand

            if( (st.empty()) || (st.top() == '(') || ( getPrecedence(str[i] >= getPrecedence(st.top())) ) ) {
                st.push(str[i]);
            } else {
                // if + is next and * is in the stack 
                while( getPrecedence(str[i]) < getPrecedence(st.top()) && !st.empty()) {
                    result += st.top();
                    st.pop();
                }
            }
        }
    }
    while(!st.empty()) {
        result += st.top();
        st.pop();
    }
    cout << result << endl;
}

// driver 
int main() {
    int noOfTests;
    cin >> noOfTests;
    while (noOfTests > 0) {
        string str;
        cin >> str;
        printPostFixNotation(str);
        noOfTests--;
    } 
    return 0;
}