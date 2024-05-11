#include<iostream>
using namespace std ;
int bmm(int a, int b){
        if ( b == 0)
            return a ;
        return bmm ( b , a % b);
}
int kmm( int a , int b){
    return ( a * b) / bmm( a , b );
}
int main (){
    int num1 , num2 ;
    cout << " Enter two number";
    cin>> num1 >> num2;
    int bmm = 1;
    int i =1;
    do{
        if ( num1 % i == 0 && num2 % i == 0) {
            bmm = i ;
        }
        i++;
    }while (  i <= num1 && i <= num2);
    int kmm = ( num1 * num2)/ bmm;
    cout << " bmm : "<< bmm << endl ;
    cout << " kmm : "<< kmm << endl ;
    return  0 ;
}
