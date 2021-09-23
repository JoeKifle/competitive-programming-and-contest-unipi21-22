/*
 Problem statement:
Write a program to print all the LEADERS in the array. An element is leader if it is greater than all the elements to its right side. And the rightmost element is always a leader. For example int the array {16, 17, 4, 3, 5, 2}, leaders are 17, 5 and 2. 
Let the input array be arr[] and size of the array be size.

Auth: Yohannis Kifle
Date: Sept. 22
Complexity: 0(n)
*/


#include<iostream>
#include<vector>
using namespace std;

void printLeader(vector<int> vect){
   
   unsigned int len = vect.size();
   int lastElement = vect[len-1];
   cout<<lastElement<<endl;
  do {
       len--;
       if(vect[len]>lastElement){
           cout<<vect[len]<<endl;
           lastElement = vect[len];
        }
    }while (len>=0); 
}


int main(){
     
    vector<int> vect;
    vect.push_back(18);
    vect.push_back(16);
    vect.push_back(17);
    vect.push_back(4);
    vect.push_back(3);
    vect.push_back(5);
    vect.push_back(2);

    printLeader(vect);
    
 return 0;
}