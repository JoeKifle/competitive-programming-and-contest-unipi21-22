/*
  STACKS:
    - Stacks are a type of container adaptors with LIFO(Last In First Out) type of working, where 
      a new element is added at one end (top) and an element is removed from that end only.
  Important operations:
    . .push()
    . .pop()
    . .empty()
*/


#include<iostream>
#include<stack>
using namespace std;
int main(int argc, char **argv[]){
   
   stack<int> stack;
    stack.push(21);
    stack.push(22);
    stack.push(24);
    stack.push(25);
    stack.pop();
    stack.pop();
    while (!stack.empty()) {
        cout << ' ' << stack.top();
        stack.pop();
    }
    return 0;
}