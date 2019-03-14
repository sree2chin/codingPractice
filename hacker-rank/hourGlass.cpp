#include <iostream>
using namespace std;
#include <vector>

// Complete the hourglassSum function below.
int hourglassSum(vector<vector <int> > arr) {
    int colLength = arr[0].size(); 
    int rowLength = arr.size();
    int i, j, max = -63;
    int tempSum;
    for(i = 0; i < rowLength - 2; i++) {
        for(j = 0; j < colLength - 2; j++) {
            tempSum = arr[i][j] + arr[i][j + 1] + arr[i][j + 2] +
                    arr[i + 1][j + 1] + 
                    arr[i+2][j] + arr[i + 2][j + 1] + arr[i + 2][j + 2];
            // cout << arr[i+1][j] << endl;
            cout << tempSum << endl;
            if(tempSum > max) {
                max = tempSum;
            }
        }
    }
    return max;
}

int main()
{
    // ofstream fout(getenv("OUTPUT_PATH"));

    vector<vector <int> > arr(6);
    for (int i = 0; i < 6; i++) {
        arr[i].resize(6);

        for (int j = 0; j < 6; j++) {
            cin >> arr[i][j];
        }

        // cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    int result = hourglassSum(arr);

    cout << result << "\n";

    // fout.close();

    return 0;
}
