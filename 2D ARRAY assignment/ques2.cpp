#include <iostream>
#include <vector>

using namespace std;

int main() {

    int arr[3][3];
    int brr[3][3];

    for(int i=0;i<3;i++) {
        for(int j=0;j<3;j++) {
           cin >> arr[i][j];
        }
    }

    cout << endl;

     for(int i=0;i<3;i++) {
        for(int j=0;j<3;j++) {
           cin >> brr[i][j];
        }
    }

    cout << endl;

     for(int i=0;i<3;i++) {
        for(int j=0;j<3;j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl;

    for(int i=0;i<3;i++) {
        for(int j=0;j<3;j++) {
            cout << brr[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl;

    for(int i=0;i<3;i++) {
        for(int j=0;j<3;j++) {
           brr[i][j]=brr[i][j]+ arr[i][j];
        }
    }

    cout << endl;

    for(int i=0;i<3;i++) {
        for(int j=0;j<3;j++) {
            cout << brr[i][j] << " ";
        }
        cout << endl;
    }



    return 0;
}