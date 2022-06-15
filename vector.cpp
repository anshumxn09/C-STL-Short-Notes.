// Vectors are dynamic because they can manage their size based on the insertion or deletion of the element.

#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector <int> v; // at this moment size of the vector is 0.
    // vector <int> v(5, 1); --> another way for initialization if know the size of the vector 
    // here size is 5 and all the element is initialize with 1(by default all the element are 0.).

    //cout<<v.capacity(); // to get capacity of the vector.

    // to insert(append) element in the vector
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);

    // NOTE : Capacity of the vector keeps on doubling itself after the vector is full.
    // Ex - i have inserted 2 elements and then i have inserted 3rd element then at this moment it's capacity will become to 4(2X2).

    //cout<<v.capacity(); // here capacity will be 8. as i have inserted 4 element already then i have inserted 5th one so (4X2).

    // Difference between size and capacity.
    // 1.size() --> returns number of element present in the vector.
    // 2.capacity() --> returns number of space allocated after a specific insertion.

    //to directly access the element 
    //cout<<v.at(3)<<endl; // returns an element present at index 3

    // to access front and last element of the vector
    //cout<<"first element : "<<v.front()<<endl;
    //cout<<"last element : "<<v.back()<<endl;

    // to remove the element from it's back.
    //cout<<"Element removed from the back : "<<v.pop_back()<<endl;

    // to remove all the vector element.
    //v.clear(); // --> at this moment only size will change to 0 but capacity doesn't.
    //cout<<v.size()<<endl; --> 0
    //cout<<v.capacity()<<endl; --> 8

    // Iteration of the vector
    /* int i --> A variable to store the element of the vector and its data type must be the data type of the iterating vector.
    for (int i:v){
        cout<<i<<endl;
    } */
    // Output --> 1, 2, 3, 4, 5

    // to make another vector which have the same values as vector v
    // vector <int> v2(v);

    return 0;
}