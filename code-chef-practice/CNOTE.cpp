#include <iostream>

using namespace std;

string ifPossible(int pagesNeeded, int money, int pages[], int costs[], int N) {
    int i;
    for(i=0; i<N; i++) {
        if(pages[i] >= pagesNeeded && costs[i] <= money) {
            return "LuckyChef";
        }
    }   
    return "UnluckyChef";
}

int main() {
    int noOfTests;
    cin >> noOfTests;
    while(noOfTests > 0) {
        int X,Y,K,N;
    
        cin >> X; // # of Pages to write
        cin >> Y; // # of pages left
        cin >> K; //  money left
        cin >> N; // # of books
        
        int P[N];
        int C[N];
        int i;
        for (i = 0; i < N; ++i)
        {
            cin >> P[i];
            cin >> C[i];
            
        }
        cout << ifPossible(X-Y, K, P, C, N) << endl;
        noOfTests--;
    } 
    return 0;
}


love: {
    commonAttributes: {
        pain: "intense",
        timePeriod: "varies from person to person"
    },
    otherAttributes: [
        "lust",
        "romance",
        "intimacy",
        "infatuation",
        "stupidity",
        "jealous",
        "wanting to talk",
        "beauty",
        "understanding",
        "sex",
        "wanting to be with other",
        "frustration",
        "longingness",
        "uncontrollable",
    ]
}