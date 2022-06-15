//Map - it is type of data structure in which the element is store in the form of Key Value Pair.

#include<iostream>
#include<map>

using namespace std;

int main(){
    map <int, string> m1;

    m1[1] = "Anshuman"; // --> 1 is the key and Anshuman is the value
    m1[2] = "Anshu";
    m1[3] = "Ansh";

    m1.insert({4, "Ans"}); // --> to insert in the map.

    for(auto i:m1){
        cout<<i.first<<endl; // to get the keys, but in the sorted fashion.
        cout<<i.second<<endl; // to get the values.
    }

    // to check whether the element is present inside the map or not.
    // cout<<m1.count(5)<<endl; // returns boolean value 1 or 0.

    // to erase anything key from the map
    // m1.erase(2);
     
    auto it = m1.find(1);

    for(auto itr=it; itr!=m1.end(); itr++){
        cout<<(*itr).first<<endl;
    }
    return 0;
}