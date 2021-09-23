/*
Problem: Finding the Maximum subarray 
Given an array Arr[] of N integers. Find the contiguous 
sub-array(containing at least one number) which has the maximum sum and return its sum.

Soln : simplest solution which is finding all possible subarrays and finding the
       maximum sub array would require a 0(n^2). But the optimal solution is the
       kadane's algorithm.

Good explanation of the algorithm: https://www.youtube.com/watch?v=86CQq3pKSUw&ab_channel=CSDojo

*/

#include<iostream>
#include<vector>
using namespace std;

void printMaxSubArray(vector<int> vect){

    int current_sum = vect.front();
    int global_sum = current_sum;
    int tempSum = 0;
    for(unsigned int i = 1; i<vect.size(); i++){
        
        tempSum = current_sum+vect[i];
        if(vect[i]>tempSum){
            current_sum = vect[i];
        }else{
            current_sum = tempSum;
        }

        // We update our global sum here.
        if(current_sum>global_sum){
            global_sum = current_sum;
        }

    }

   cout<<global_sum<<endl;

}


int main(){
    
    vector<int> vect;
    vect.push_back(-1);
    vect.push_back(-2);
    vect.push_back(-3);
    vect.push_back(-4);
    printMaxSubArray(vect);
    return 0;
}