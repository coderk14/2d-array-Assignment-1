#include<iostream>
#include <climits>
using namespace std;
int main(){
int n,m;
cout << "Enter the number of rows : ";
cin >> n;
cout << "Enter the number of columns : ";
cin >> m;
int a[n][m];
cout << "Enter the matrix element : " << endl;
for(int i = 0 ; i < n ; i++){
for(int j = 0 ; j < m ; j++){
cin >> a[i][j];
}
}

for(int i=0;i<n;i++) {
    for(int j=0;j<m;j++) {
        if(i==(n-1)/2) {
            cout << a[i][j] <<" ";
        }
        else if (j==(m-1)/2) {
            cout << a[i][j];
        }
        else {
            cout << " ";
        }
    }
    cout << endl;
}

return 0;
}