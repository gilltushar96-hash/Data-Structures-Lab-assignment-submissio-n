# Data Structures Lab Assignment

## MERGE_RADIX_QUICK_TOWER_OF_HANOI.cpp

This C++ program contains implementations of four common data structures and
algorithms lab exercises:

- Quick sort using the last element as the pivot
- Radix sort using ten dynamically allocated digit buckets
- Merge sort using a temporary dynamic array
- Tower of Hanoi using recursion

## Current Program Behavior

The `main()` function creates an array of twelve integers, sorts it with quick
sort, and displays the sorted array:

```text
1 2 3 4 4 4 6 6 7 7 8 9
```

The radix sort, merge sort, and Tower of Hanoi functions are implemented but are
not called by the current `main()` function.

## Compile and Run

Using g++:

```bash
g++ MERGE_RADIX_QUICK_TOWER_OF_HANOI.cpp -o algorithms
./algorithms
```

On Windows with MinGW:

```powershell
g++ MERGE_RADIX_QUICK_TOWER_OF_HANOI.cpp -o algorithms.exe
.\algorithms.exe
```

## Function Summary

| Function | Purpose |
| --- | --- |
| `quick_sort()` | Sorts an integer array with quick sort |
| `radix_sort()` | Sorts non-negative integers by decimal digits |
| `merge_sort()` | Sorts an integer array with merge sort |
| `tower_of_hanoi()` | Prints the moves required to solve Tower of Hanoi |
| `display_array()` | Prints the contents of an array |

