/*
   Problem : Finding the missing number in a an array.
     - Given an array of size N-1 such that it only contains 
     distinct integers in the range of 1 to N. Find the missing element.

     Auth: Yohannis Kifle 
     Date: Sept. 22
     Complexity: 0(n)
*/
#include<iostream>
#include<vector>
using namespace std;

void printMissingNumber(vector<int> vect, int n){

    int totalSum = (n*(n+1))/2;
    int sum = 0;
    for(unsigned int i = 0; i<vect.size(); i++){
      sum+=vect[i];
    } 

    cout<<"Missing Number: "<<totalSum-sum<<endl;

}


int main(){

    vector<int> vect;
    int N = 5;
    vect.push_back(1);
    vect.push_back(2);
    vect.push_back(3);
    vect.push_back(5);
    printMissingNumber(vect,N);
    return 0;
}