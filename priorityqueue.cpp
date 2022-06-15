// priority queue --> based on the concept of max and min heap.
#include<iostream>
#include<queue>

using namespace std;

int main(){
    // it is based on the concept max heap which means that whenever we will fetch the element, the largest element among the other elements will take place.

    priority_queue <int> maxi;

    // it is based on the concept min heap
    priority_queue <int, vector<int>, greater<int> > mini;

    // to insert the element in the priority queue
    maxi.push(1);
    maxi.push(2);
    maxi.push(3);
    maxi.push(4);

    int n = maxi.size();

    for(int i=0; i<n; i++){
        cout<<maxi.top()<<endl;
        maxi.pop();
    }
    
    // output --> 4, 3, 2, 1

    mini.push(1);
    mini.push(2);
    mini.push(3);
    mini.push(4);

    n = mini.size();

    for(int i=0; i<n; i++){
        cout<<mini.top()<<endl;
        mini.pop();
    }

    // output --> 1, 2, 3, 4
    return 0;
}