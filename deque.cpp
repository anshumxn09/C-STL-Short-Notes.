// Dequeue --> 1. which means you can perform pop(removing) and push(inserting) at both the ends of the queue.
// 2. dynamic because they can manage their size based on the insertion or deletion of the element.

#include<iostream>
#include<deque>

using namespace std;

int main(){
    deque <int> d; // initializing deque.
    
    d.push_back(1); // inserting 1 at the back of the deque. [1]
    d.push_front(2); // inserting 2 at the front of the deque. [2, 1]
    d.push_front(2); // inserting 2 at the front of the deque. [2, 2, 1]
    d.push_front(2); // inserting 2 at the front of the deque. [2, 2, 2, 1]
    d.push_front(2); // inserting 2 at the front of the deque. [2, 2, 2, 2, 1]
    d.push_front(2); // inserting 2 at the front of the deque. [2, 2, 2, 2, 2, 1]

    // iterating deque
    for(int i:d){
        cout<<i<<endl;
    }
    // Output --> 2, 1

    // Removing element from the back.
    // d.pop_back();

    // Removing element from the begining.
    // d.pop_front();

    // to access the element.
    // d.at(0);

    // to access front and last element of the deque
    //cout<<"first element : "<<d.front()<<endl;
    //cout<<"last element : "<<d.back()<<endl;

    // to check whether deque is empty or not
    // cout<<d.empty()<<endl; // returns an boolean value ie 1, 0

    // to get the size of the deque.
    // d.size();

    // to erase all the element from the deque.
    // d.erase(d.begin(), d.begin()+1); // --> here, its will ask for the range from where to where have to delete the elements.
    // here it will erase all the elements from 0 to d.size - 1.
    // NOTE --> d.erase(0, 4) --> it will remove all the element from 0, 1, 2, 3
    // hence it doesn't include 4 it include 4-1.

    return 0;
}