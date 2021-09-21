/*
WARNING : NEVER USE BUBBLE SORT. SELECTION SORT ASWELL.

        SORTING
Why we need sorting?
    - if you got phonebooks, mp3,... you need sorting methods to get organised.
    - There are problems that becomes interesting once the items are sorted.
      Eg. Finding the medium.(If the array is sorted you can just take n/2th element depending if
            the list is odd or even). The problem will become constant time if the list is sorted.
        . Searching for a number in a list might take you a linear time; but if the array or the list 
          is sorted it takes you logarithmic time. 
        . In a data compression; you can sort items and find duplicates and just represent with data and
          Frequency.
1. INSERTION SORTING:
  . Involves pairwise swap for each keys.
  . 0(n) steps (key positions)
  . Inplace sorting 0(1) space.
  . Each steps; has 0(n) compare and swaps. Compares are more expensive than swaps. Swaps could be just
    just changing te pointers.
  . 0(N^2) algorithm   

Pseudocode:
  for i = 1,2,3,..:
    insert A[i] into sorted array of A[0:i-1]
    by pairwise swaps down to the correct position.

- We can use binary search on A[-:n-1] already sorted to get 0(logi) time. Overall 0(nlogn) for compares,
  But still 0(n^2) for swaps. Because after you get where to insert the number you still have to do the 
  shift to insert the number. **

2. MERGE SORT
 . Devide and conquer.
 . 0(n) auxilary space. 
 . 0(nlogn) complexity.

Pseudocode:
 
 MergeSort(arr[], l,  r)
If r > l
     1. Find the middle point to divide the array into two halves:  
             middle m = l+ (r-l)/2
     2. Call mergeSort for first half:   
             Call mergeSort(arr, l, m)
     3. Call mergeSort for second half:
             Call mergeSort(arr, m+1, r)
     4. Merge the two halves sorted in step 2 and 3:
             Call merge(arr, l, m, r)


*/