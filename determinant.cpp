#include<iostream>
using namespace std;
double determinant( int  matrix[3][3]){
    double det = 0;
    det = matrix[0][0] * (matrix[1][1]* matrix[2][2]-matrix[1][2]* matrix[2][1])-
          matrix[0][1] * (matrix[1][0]* matrix[2][2]-matrix[1][2]* matrix[2][0])+
          matrix[0][2] * (matrix[1][0]* matrix[2][1]-matrix[1][1]*matrix[2][0]);
    return det;
}
int main() {
    int matrix[3][3];
    cout<<" Enter the 3*3 matrix : "<< endl;
    for (int i = 0 ; i<3; ++i){
        for ( int j = 0 ; j < 3 ; ++j){
            cin >> matrix[i][j];
        }
    }
    cout<<" Matrix : " << endl ;
    for ( int i = 0 ; i < 3 ; ++i) {
        for ( int j = 0 ; j < 3 ; ++j ){
            cout<< matrix[i][j]<< " ";
        }
        cout<<endl;
    }
    double  result = determinant( matrix );
    cout << " determinant is : "<< result << endl;
    return 0 ;
}