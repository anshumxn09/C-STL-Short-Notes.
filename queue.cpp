// queue --> it is such type of data structure that follow the FIFO(First In First Out) principle.
#include<iostream>
#include<queue>

using namespace std;

int main(){
    queue <int> q;

    // push is used for inserting element into the queue.
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);

    // to fetch the element present at the begining.
    // cout<<q.front()<<endl; --> 1
    
    // pop is used for removing the element from the begining of the queue.
    // q.pop();

    // Size of the queue
    //q.size();
    return 0;
}