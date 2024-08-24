Here are 10 additional sample questions related to C++ sorting algorithms, along with answers, and the sample questions you provided earlier:

### 1. Sample MC Question
**Question:**
Which of the following sorting algorithms has the worst-case time complexity of O(n^2)?

a) Merge Sort  
b) Quick Sort  
c) Bubble Sort  
d) Heap Sort

**Answer:** c) Bubble Sort

### 2. Sample MC Question
**Question:**
Which sorting algorithm is considered stable?

a) Quick Sort  
b) Merge Sort  
c) Heap Sort  
d) Selection Sort

**Answer:** b) Merge Sort

### 3. Sample Question
**Question:**
Explain why the quicksort algorithm is not stable.

**Answer:**
Quicksort is not stable because during partitioning, elements with equal keys might be rearranged relative to each other. Stability requires that equal elements retain their relative order, which quicksort does not guarantee due to its swapping mechanism.

### 4. Sample MC Question
**Question:**
Which of the following algorithms does **not** use a divide-and-conquer approach?

a) Merge Sort  
b) Quick Sort  
c) Bubble Sort  
d) All of the above

**Answer:** c) Bubble Sort

### 5. Sample Question
**Question:**
Describe how the merge function works in the merge sort algorithm.

**Answer:**
The merge function in merge sort takes two sorted subarrays and combines them into a single sorted array. It repeatedly compares the smallest elements of each subarray, copying the smaller element into the resulting array, until all elements from both subarrays have been processed.

### 6. Sample MC Question
**Question:**
Which sorting algorithm performs the least number of comparisons on an already sorted list?

a) Selection Sort  
b) Insertion Sort  
c) Bubble Sort  
d) Quick Sort

**Answer:** b) Insertion Sort

### 7. Sample Question
**Question:**
What is the main advantage of using heapsort over quicksort?

**Answer:**
The main advantage of heapsort over quicksort is that heapsort has a guaranteed worst-case time complexity of O(n log n), whereas quicksort has a worst-case time complexity of O(n^2). Additionally, heapsort is not recursive, which can be beneficial in terms of memory usage for large datasets.

### 8. Sample MC Question
**Question:**
If a sorting algorithm is stable and has a time complexity of O(n log n), which algorithm could it be?

a) Quick Sort  
b) Heap Sort  
c) Merge Sort  
d) Selection Sort

**Answer:** c) Merge Sort

### 9. Sample Question
**Question:**
Compare and contrast the time complexity of bubble sort, insertion sort, and selection sort.

**Answer:**
All three algorithms—bubble sort, insertion sort, and selection sort—have a worst-case time complexity of O(n^2). However, bubble sort and insertion sort can have better performance in the best case (O(n)) if the input is already sorted or nearly sorted, while selection sort has the same O(n^2) time complexity regardless of the initial order of elements.

### 10. Sample MC Question
**Question:**
Which sorting algorithm works by repeatedly finding the minimum element from the unsorted part and moving it to the beginning?

a) Insertion Sort  
b) Selection Sort  
c) Bubble Sort  
d) Merge Sort

**Answer:** b) Selection Sort

---

### Provided Sample Questions (Rephrased and Completed)

### 11. Sample MC Question
**Question:**
Suppose quicksort is sorting an array of 10 integers. It has just finished the partitioning of the array for the first time. The contents of the array at this point look like this:

1  5  4  7  9  12  11  10  6  12

Which of the following statements is correct?

a) The pivot element is 9, and all elements to its left are less than or equal to 9.  
b) The pivot element is 7, and all elements to its right are greater than or equal to 7.  
c) The pivot element is 12, and all elements to its left are less than or equal to 12.  
d) The pivot element is 7, and all elements to its left are greater than or equal to 7.

**Answer:** a) The pivot element is 9, and all elements to its left are less than or equal to 9.

### 12. Sample Question
**Question:**
Based on the versions of Bubble Sort that you studied, what advantage does bubble sort have over other sorting algorithms?

**Answer:**
Bubble sort is simple to understand and implement. It has an advantage when working with small datasets or nearly sorted data, where it can perform better than algorithms like selection sort due to its ability to detect sorted lists early and terminate.

### 13. Sample Question
**Question:**
When performing a ReheapUp operation on a heap (implemented with an array), how does the function calculate the position of the parent of an entry in the heap, given its index value in the array?

**Answer:**
In a heap implemented with an array, the parent of a node at index `i` can be found at index `(i - 1) / 2` (using integer division).

### 14. Sample MC Question
**Question:**
What is the search complexity associated with Binary Search (i.e., Order of Magnitude / Big O notation)?

a) O(n)  
b) O(log n)  
c) O(n^2)  
d) O(1)

**Answer:** b) O(log n)

### 15. Sample Question
**Question:**
Consider the source code below:
```cpp
sum = 0;
for( i = 0; i < n; i++)
   for( j = 0; j < i; j++)
      sum++;
```
What Big-O notation represents the complexity of this code if `n` is considered to be very large?

**Answer:**
The time complexity of the code is O(n^2). The outer loop runs `n` times, and the inner loop runs `i` times for each `i`, leading to the sum of the first `n` integers, which is O(n^2).