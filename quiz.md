
# Sorting Algorithms Quiz

## 1. Sample MC Question

**Question:**
Which of the following sorting algorithms has the worst-case time complexity of $O(n^2)$?

1. Merge Sort  
1. Quick Sort  
1. Bubble Sort  
1. Heap Sort

**Answer:** Bubble Sort

### 2. Sample MC Question

**Question:**
Which sorting algorithm is considered stable?

1. Quick Sort  
1. Merge Sort  
1. Heap Sort  
1. Selection Sort

**Answer:** Merge Sort is considered stable because it maintains the relative order of equal elements. In contrast, Quick Sort is not stable because it may change the relative order of equal elements.

### 3. Sample Question

**Question:**
Explain why the quicksort algorithm is not stable.

**Answer:**
Quicksort is not stable because during partitioning, elements with equal keys might be rearranged relative to each other. Stability requires that equal elements retain their relative order, which quicksort does not guarantee due to its swapping mechanism.

### 4. Sample MC Question

**Question:**
Which of the following algorithms does **not** use a divide-and-conquer approach?

1. Merge Sort  
1. Quick Sort  
1. Bubble Sort  
1. All of the above

**Answer:** 3 Bubble Sort does not use a divide-and-conquer approach. It iterates through the list, comparing adjacent elements and swapping them if necessary. By contrast, Merge Sort and Quick Sort use divide-and-conquer strategies to sort the list where the list is divided into smaller sublists.

### 5. Sample Question

**Question:**
Describe how the merge function works in the merge sort algorithm.

**Answer:**
The merge function in merge sort takes two sorted sub-arrays and combines them into a single sorted array. It repeatedly compares the smallest elements of each sub-array, copying the smaller element into the resulting array, until all elements from both sub-arrays have been processed.

### 6. Sample MC Question

**Question:**
Which sorting algorithm performs the least number of comparisons on an already sorted list?

1. Selection Sort  
1. Insertion Sort  
1. Bubble Sort  
1. Quick Sort

**Answer:** 2 Insertion Sort preforms the least number of comparisons on an already sorted list. Insertion Sort has a best-case time complexity of O(n) when the list is already sorted, as it only needs to compare each element with its predecessor and move elements as needed.

### 7. Sample Question

**Question:**
What is the main advantage of using heap-sort over quicksort?

**Answer:**
The main advantage of heap-sort over quicksort is that heap-sort has a guaranteed worst-case time complexity of $O(n \log_2 n)$, whereas quicksort has a worst-case time complexity of $O(n^2)$. Additionally, heap-sort is not recursive, which can be beneficial in terms of memory usage for large datasets.

### 8. Sample MC Question

**Question:**
If a sorting algorithm is stable and has a time complexity of $O(n \log_2 n)$, which algorithm could it be?

1. Quick Sort  
1. Heap Sort  
1. Merge Sort  
1. Selection Sort

**Answer:** 3 Merge Sort is a stable sorting algorithm with a time complexity of $O(n \log_2 n)$, making it a suitable candidate for the given criteria.

### 9. Sample Question

**Question:**
Compare and contrast the time complexity of bubble sort, insertion sort, and selection sort.

**Answer:**
All three algorithms—bubble sort, insertion sort, and selection sort—have a worst-case time complexity of $O(n^2)$. However, bubble sort and insertion sort can have better performance in the best case $(O(n))$ if the input is already sorted or nearly sorted, while selection sort has the same $O(n^2)$ time complexity regardless of the initial order of elements.

### 10. Sample MC Question

**Question:**
Which sorting algorithm works by repeatedly finding the minimum element from the unsorted part and moving it to the beginning?

1. Insertion Sort  
1. Selection Sort  
1. Bubble Sort  
1. Merge Sort

**Answer:** 2 Selection Sort works by repeatedly finding the minimum element from the unsorted part and moving it to the beginning. This process continues until the entire list is sorted.

---

### Provided Sample Questions (Rephrased and Completed)

### 11. Sample MC Question

**Question:**

Suppose quicksort is sorting an array of 10 integers. It has just finished the partitioning of the array for the first time. The contents of the array at this point look like this:

1  5  4  7  9  12  11  10  6  12

Which of the following statements is correct?

1. The pivot element is 9, and all elements to its left are less than or equal to 9.  
1. The pivot element is 7, and all elements to its right are greater than or equal to 7.  
1. The pivot element is 12, and all elements to its left are less than or equal to 12.  
1. The pivot element is 7, and all elements to its left are greater than or equal to 7.

**Answer:** 1 The pivot element is 9, and all elements to its left are less than or equal to 9.

### 12. Sample Question

**Question:**
Based on the versions of Bubble Sort that you studied, what advantage does bubble sort have over other sorting algorithms?

**Answer:**
Bubble sort is simple to understand and implement. It has an advantage when working with small datasets or nearly sorted data, where it can perform better than algorithms like selection sort due to its ability to detect sorted lists early and terminate.

### 13. Sample Question

**Question:**
When performing a Re-heap Up operation on a heap (implemented with an array), how does the function calculate the position of the parent of an entry in the heap, given its index value in the array?

**Answer:**
In a heap implemented with an array, the parent of a node at `index` can be found at  `(index - 1) // 2` (using integer division).

### 14. Sample MC Question

**Question:**
What is the search complexity associated with Binary Search (i.e., Order of Magnitude / Big O notation)?

1. O(n)  
1. O(log n)  
1. $O(n^2)$  
1. O(1)  

**Answer:** 2. $O(\log_2 n)$

### 15. Sample Question

**Question:**
Consider the source code below:

```cpp
void testQuestion(int n) {
    int sum = 0;
    for(int i = 0; i < n; i++) // First (n) gos
        for(int j = 0; j < i; j++) // at last go i will almost be n
            sum++;
}
```

What Big-O notation represents the complexity of this code if `n` is considered to be very large?

**Answer:**
The time complexity of the code is $O(n^2)$. The outer loop runs `n` times, and the inner loop runs `i` times for each `i`, leading to the sum of the first `n` integers, which is $O(n^2)$.
