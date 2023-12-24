#include<iostream>
using namespace std;
int main(){
int n,m;
cout << "Enter the number of rows : ";
cin >> n;
cout << "Enter the number of columns : ";
cin >> m;
int a[n][m];
cout << "Enter the matrix element : ";
for(int i = 0 ; i < n ; i++){
for(int j = 0 ; j < m ; j++){
cin >> a[i][j];
}
}
int l1 , l2 , r1 , r2;
cout << "Enter the value of l1 coordinate : ";
cin >> l1;

cout << "Enter the value of r1 coordinate : ";
cin >> r1;
cout << "Enter the value of l1 coordinate : ";
cin >> l2;
cout << "Enter the value of l1 coordinate : ";
cin >> r2;

int sum=0;
for(int i=l1;i<=l2;i++) {
    for(int j=r1;j<r2;j++) {
        sum+=a[i][j];
    }
}

cout << "sum of the rectangle is " << sum;


return 0;
}