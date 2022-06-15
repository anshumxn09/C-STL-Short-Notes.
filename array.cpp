// Arrays --> Static Array Becasue they are of fixed size.
#include<iostream>
#include<array>

using namespace std;

int main(){
    array <int, 4> arr = {1,2 ,3 ,4};
    // Size of the array
    // int size = arr.size();
    // for(int i=0; i<size; i++){
    //     cout<<arr.at(i)<<endl;
    // }

    // to directly access the element 
    // cout<<arr.at(3)<<endl; // returns an element present at index 3.
    // to check whether array is empty or not
    // cout<<arr.empty()<<endl; // returns an boolean value ie 1, 0.

    // to access front and last element of the array
    //cout<<"first element : "<<arr.front()<<endl;
    //cout<<"last element : "<<arr.back()<<endl;

    return 0;
}