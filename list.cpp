// List --> 1) It is implemented with the help of the doubly linked list
// doubly linked list --> there are two pointer from front as well as from back.
// 2) you cannot directly access the element you have to traverse from the begining.

#include<iostream>
#include<list>
using namespace std;

int main(){
    list <int> myList;
    // list <int> l(5, 100); --> another way for initialization if know the size of the list 
    // here size is 5 and all the element is initialize with 1(by default all the element are 0.).

    // myList.push_back(1); --> inserting from back.
    // myList.push_front(2); --> inserting from front.

    // myList.erase(myList.begin()) --> remove the element which is present at the begining.

    // Size of the List
    //myList.size();

    // to copy one list into another list.
    //list <int> l2(myList);

    // Iteration of the list
    /* for(int i:myList){
        cout<<i<<endl;
    } */ 


    return 0;   
}
