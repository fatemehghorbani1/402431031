#include<iostream>
using namespace std;
int main(){
    int number;
    cout<<"Enter a number : ";
    cin>>number;
    cout<<"binary number is : ";
    do{
        int remainder= number%2;
        cout<<remainder;
        number = number / 2;
    }while(number > 0 );
    cout<<" ";
    return 0 ;
}