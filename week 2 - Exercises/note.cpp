/*
Lecture : 03 and 04
   Date : Sept 20 and 22
 
Note: ** Use pass with reference to avoid copies; make sure to practice.
      ** Don't use pointers.
      ** Use vectors.

. Vector uses the doubling strategy to reserve space. Its like first it reserves a size of 32 and
  Then if it full, it will reserve another space of 64, it is full next 128. So, it would be a good
  idea to reserve the amount of size we want if we know the size we are going to store.

SEARCHING AND SORTING

- Never use bubble sort. Never ever. Consider selection sort.

BUBBLE SORT:
   . Its quadratic sorting algorithm.
   . Optimal if all we do is swap consicutive element.

INSERTION SORT:
   . Time complexity: 0(n^2) worst case.
   . Good if you want to sort smaller arrays and almost sorted arrays. (You can measure the sortness of 
     an array by the number of insertions. That is the larger the number of insertions the larget the 
     time complexity of this algorithm. So, its proportional to the number of insertions.)
    
DEVIDE AND CONQUER PARADIGM
   - The paradigm takes three steps.
  1. Devide: Devide the problem into smaller sub instances.
  2. Solve: Solve them recursively(or stop if small).
  3. Combine: Solutions of sub instances are combined to get the solution of the main problem.

BINARY SEARCH:
  Steps:
    1. Devide  : Split the array in 2 halves.
    2. Solve   : Searching the key in the right part.
    3. Combine : 
  The cost of algorithm is the sum of the cost of searching a key in halve of the size plus the cost
  of doing the device and combine(which is constant time)
    T(n) = T(n/2) + 0(1)
  
  Note: One way you can visualize and compute the running time of recursive algorithm is by drawing execution
        Tree.
  Complexity: 0(log(n))
  

  EXPONENTIAL SEARCH: - we are interested in looking for particular key in a sorted array.
    - Easy varient of binary search. 
    - We have two different phase.
      Step 1. Try every position which are power of 2 starting from 1 until the power of 2 is greater than
         the size of array.
          i.e : start with position 1, then 2, then 4, then 8,... 

          So, we know that our key(V) is between A[2^k-1] < V <= A[2^k]
        
        Time complexity of Step 1: Is 0(log(v)); because it depends on the location of V.

      Step 2. Then do binary search between A[2^k-1] ... A[2^k]
        
         Time complexity of Step 1: 0(log(n)); ofc, n is the interval size here.
         0(log(n)) = 0(log(2^k)) ~ 0(log(v)) ; because V is very close to 2^k
     
     - So, over all algorithm complexity of 0(log(v))
   
   ADVANTAGE OVER BS:
     - Faster if V is smaller; We are assuming V as a key of an array.
     - The main advantage: You can search over unbounded "arrays" (sorted sequences). i.e if you
       dont know the length.
  
  MERGE SORT:
     
     . Based on devide and conquere.
     . In the devide step; we devide our array almost in two sizes.
     . Devide; n/2 devide.
     . Solve; is solve them recursively.
     . Combine; the most expensive one; and sorts the two sorted array.

    - The merge part uses to pointer from the two array. And slide over the pointers to
    compare and merge.

    Time complexity:
      - The time for deviding is 1; constant.
      - 0(n) is the cost of merging.
      - 2T(n/2) + 0(n)
      - Total: 0(nlogn)

Problem : Inversion count




*/




