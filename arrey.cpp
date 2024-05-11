#include<iostream>
using namespace std;
void doubleArrayElements(int arr[],int size) {
    for ( int i = 0; i< size ; i++){
        arr[i] *=2;
    }
}
int main (){
    int arr[]={1,2,3,4,5,6,7,8,9};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout<<" before multiply 2 : ";
    for ( int i = 0 ; i<size ; i++){
        cout<<arr[i]<<" ";
    }
    doubleArrayElements(arr,size);
    cout<<" \n after multiply 2 : " ;
    for ( int i = 0 ; i < size ; i++ ){
        cout<<arr[i]<<" ";
    }
    return 0 ;

}