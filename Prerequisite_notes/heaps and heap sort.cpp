/*
            HEAPS AND HEAP SORT.
    
- Lets start with the definition of  PRIORITY QUEUE
- PRIORITY QUEUE: is an abstract data type(ADT) that operates similar to a normal queue except that each
                  element has a certain priority. The priority of the elements in the priority queue derermins
                  the order in which elements are removed from the PQ.
     ** similar to a regular queue or stack data structure in which each element additionally has a
        "priority" associated with it. In a priority queue, an element with high priority is served 
        before an element with low priority. ***
    . Implements a set S of elements and each of elements associate with a key.
    . Possible operations; insert(S,x), max(S), extract_max(S).

HEAP : is a tree based data structure that satisfies the heap invarient (also called heap property):
  i.e if A is a parent node of B, then A is ordered with respect to B for all nodes A, B in the heap.  
  
  -If the value of the parent node is always greater than or equal to the value of the child node its called MAX HEAP.
  -If the value of the parent node is always less than or equal to the value of the child node its called MIN HEAP.

  NOTE : ALL HEAP SHOULD BE TREE          


*/