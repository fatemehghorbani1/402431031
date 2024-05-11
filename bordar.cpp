#include<iostream>
using namespace std ;
int main(){
    int matrix[3][3];
    int vector[3];
    int result[3] = {0};
    cout<<" pleas enter a 3*3 matrix : "<< endl;
    for ( int i = 0 ; i < 3 ; i++){
        for(int j = 0 ; j < 3 ; j++){
            cout<< "[ "<<  i <<"]["<< j <<" ] : ";
            cin >> matrix[i][j];
        }
    }
    cout<< " enter a vector : "<< endl;
    for( int i = 0 ; i < 3 ; i++){
        cout<<"["<< i << "] :";
        cin >> vector[ i ];
    }
    for ( int i = 0 ; i < 3 ; i++){
        for( int j = 0 ; j < 3 ; j++){
            
            result[i] += matrix[i][j] * vector[ j ];
        }
    }
    cout<<" the result matrix_vector : ";
    for ( int i = 0 ; i < 3 ; i++){
        cout<<result[i]<<" ";
    }
    cout<< endl;
    return 0;
}