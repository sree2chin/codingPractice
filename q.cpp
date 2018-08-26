#include <iostream>
using namespace std;

#define MX 1000002

string s[MX];
int a[MX], b[MX], c[MX], d[MX];

int main()
{
    int n, i;
    
    cin >> n;
    
    for (i = 0; i < n; ++i) {
        cin >> s[i] >> a[i] >> b[i] >> c[i] >> d[i];
    }
    
    int q;
    
    cin >> q;

    string h[q];
    int e[q], f[q], g[q];
    
    for (i = 0; i < q; ++i) {
        cin >> h[i] >> e[i] >> f[i] >> g[i];
    }

    int k;
    int j;
    int tempMax = 0;
    for(j = 0; j < q; j++) {
        k = 0;
        tempMax = 0;
        for(i = 0; i < n; i++) {
            if(s[i] == h[j] && a[i] == e[j] && b[i] == f[j] && c[i] <= g[j]) {
                if(tempMax < d[i]) {
                    tempMax = d[i];
                }            
            }
        }
       
        if(tempMax > 0) {
           cout << tempMax << endl; 
        } 
        else {
            cout << -1 << endl; 
        } 
        
    }
    
    return 0;
}