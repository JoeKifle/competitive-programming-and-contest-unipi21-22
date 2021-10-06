/*
  deque: is a double ended queue. Usually called "deck".
  Important properties:
    . Allows fast insertion from both start and end.
  Allowed operations: (important)
    . .push_back()
    . .push_front()
    . .front()
    . .back()
    . .size()
    . .max_size()
    . .pop_front()
*/
#include<iostream>
#include<deque>

using namespace std;

int main(int argc, char *argv[]){
  
  deque<int> gquiz;
  gquiz.push_back(10);
  gquiz.push_back(20);
  gquiz.push_back(30);
  gquiz.push_front(40);
  
  

  cout<<gquiz[0]<<" ";
  cout<<gquiz[1]<<" ";
  cout<<gquiz[2]<<" ";
  cout<<gquiz[3]<<endl;
  // size of the deque.
  cout<<"size: "<<gquiz.size()<<endl;
  // Front element.
  cout<<"Front: "<<gquiz.front()<<endl;
  // Back element.
  cout<<"Back: "<<gquiz.back()<<endl;
  // Popping the fron element.
  gquiz.pop_front();
  // Front element.
  cout<<"Front: "<<gquiz.front()<<endl;


}