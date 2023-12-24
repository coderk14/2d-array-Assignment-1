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

int max=INT_MIN;
int sum=0;
int row=-1;

for(int i = 0 ; i < n ; i++){
for(int j = 0 ; j < m ; j++){
sum+=a[i][j];
}
if(sum>max) {
    max=sum;
    row=i;
}
}

cout << "maximum sum of the row " << row << " of matrix is " << max;


return 0;
}