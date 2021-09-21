/*
  Vectors : Refresh.

  Are just like arrays. The intersting part of it they can resize automatically
  depending if you add any elements to it.

Functions:

.push_back() -> adds an element to the END of the vector (also resizes it).
.at(index)  -> Return element at specified index number.
.size()  -> Return an unsingned int equal top the number of elements.
.begin() -> Reads vector from first element (index 0)
.insert(myVector.begin() + integer, new value) -> Adds element BEFORE  specified index number.
.erase(myVector.begin()+integer) -> removes an element AT specified index number
.clear() -> removes all element of the vector.
*/

#include<iostream>
#include<vector>

using namespace std;

int main(){

// Format : vector<DataType> nameOfVector

vector<int> myVector;
myVector.push_back(12);
myVector.push_back(1);
myVector.push_back(11);
myVector.push_back(7);

myVector.insert(myVector.begin()+2,4);
// make sure to use unsigned int to initialize your iterator.
for (unsigned int i=0; i<myVector.size();i++){
cout<<myVector[i]<<" "<<endl;
}


}