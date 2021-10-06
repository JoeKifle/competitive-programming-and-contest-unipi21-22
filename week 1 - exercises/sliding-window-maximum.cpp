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

void printMaximum(vector<int> vect, int k){

    int start = 0;
    int len = vect.size();
    int end = k-1;
    int max = vect[0];
    // Finding the max for the first subarray.
    for(int i = 0; i< k; i++){
        if(vect[i]>max){
            max = vect[i]; 
        }
    }

    while(end<len){
        


    }
    

   
    

}


int main(){

    vector<int> vect;
    int k = 4;
    vect.push_back(8);
    vect.push_back(5);
    vect.push_back(10);
    vect.push_back(7);
    vect.push_back(9);
    vect.push_back(4);
    vect.push_back(15);
    vect.push_back(12);
    vect.push_back(90);
    vect.push_back(13);
    printMaximum(vect,k);
    return 0;
}