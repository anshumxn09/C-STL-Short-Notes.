// stack --> it is such type of data structure that follow the LIFO(Last In First Out) principle.

#include<iostream>
#include<stack>

using namespace std;

int main(){
    stack <string> s;
    // push is used for inserting element into the stack.

    s.push("Anshuman");
    s.push("Lovish");
    s.push("Dilin");

    // to access the element at top.
    // cout<<s.top()<<endl; --> Dilin

    // pop is used for removing element from top of the stack.
    // s.pop();

    // Size of the Stack
    //s.size();

    // to check whether stack is empty or not
    // cout<<s.empty()<<endl; // returns an boolean value ie 1, 0.

    return 0;
}