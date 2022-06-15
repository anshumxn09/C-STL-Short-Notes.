// Set --> 1) No duplication is allowed.
// 2) It is implemented by BST (Binary Search Tree).

#include<iostream>
#include<set>
using namespace std;

int main(){
    set <int> s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);

    // for(auto i:s){
    //     cout<<i<<endl; // gives the output in the ordered fashion.
    // }

    // s.erase(s.begin()); // remove the element from ordered fashion from the begining.

    // to create an iterator
    // set <int> :: iterator it = s.begin(); 
    // it++; --> will point to next element in the ordered fashion.

    // to check whether the element is present inside the set or not.
    // cout<<s.count(5)<<endl; // returns boolean value 1 or 0.

    // to find an element in the set and get back its iterator.
    // set <int> :: iterator it = s.find(4); --> find return the iterator of the provided element.
    	
    // to get the value present in the iterator 
    // cout<<*it<<endl;

    // iterating through iterator
    // set <int> :: iterator it = s.begin();
    // for(auto itr=it; itr!=s.end(); itr++){
    //     cout<<*itr<<endl;
    // }
    // output --> 1, 2, 3, 4

    // insert, find , erase , count --> complexity O(logn)

    return 0;
}