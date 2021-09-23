/*
  Problem: 
    Given an array arr[] of N non-negative integers representing 
    the height of blocks. If width of each block is 1, compute how 
    much water can be trapped between the blocks during the rainy season. 
  Link: https://practice.geeksforgeeks.org/problems/trapping-rain-water-1587115621/1
  Explanation: https://www.youtube.com/watch?v=C8UjlJZsHBw&ab_channel=TECHDOSE

  The simplest solution would be to calculate the trapped water for each block.
  It goes like this:
    -> First you find the left and right max value for each block. Then the water level
    is going to be the minimum of the two values. And the amount of water that block
    could hold is going to be 
        blockTrapp = min(maxLeft, maxright)-currentBolckValue.
    
    - You would do this for each block and sum all together to get the total amount of 
      trapped water.
    
    Time complexity for this: 0(n^2)

   . But we can reduce the time complexity to 0(n), by keeping the right and left max value
     during the iteration. Because searching the right and left max value if costing us 0(n)
     and that's why our overall complexity is 0(n^2).
   
   . I will be imlementing the 0(n) algorithm.
   
   Asummptions:
     - The first and last block  will not hold any water. So we will start with the second and
     last-1.
*/

#include<iostream>
#include<vector>
using namespace std;

void printTrappedWater(vector<int> vect){
  
    int maxLeft = 0;
    int maxRight = 0;
    



}


int main(){


    vector<int> vect;
    vect.push_back(1);
    vect.push_back(2);
    vect.push_back(3);
    vect.push_back(5);
    printTrappedWater(vect);

    return 0;
}