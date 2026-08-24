# Documentation: MERGE_RADIX_QUICK_TOWER_OF_HANOI.cpp

## Purpose

This file contains implementations of four algorithms commonly used in data
structures coursework:

- Quick sort
- Radix sort
- Merge sort
- Tower of Hanoi

It also includes `display_array()` for printing integer arrays.

## Algorithm Details

- `quick_sort()` partitions the array around its last element and recursively
  sorts the two partitions.
- `radix_sort()` processes decimal digits from least significant to most
  significant using ten dynamically allocated buckets. It is designed for
  non-negative integers.
- `merge_sort()` recursively divides the array and merges sorted sections with a
  temporary dynamic array.
- `tower_of_hanoi()` recursively prints the moves needed to transfer disks from
  one peg to another using an auxiliary peg.

## Current Program Behavior

The current `main()` function creates an array of twelve integers, sorts it with
quick sort, and displays:

```text
1 2 3 4 4 4 6 6 7 7 8 9
```

The radix sort, merge sort, and Tower of Hanoi functions are implemented but are
not currently called by `main()`.

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
| `tower_of_hanoi()` | Prints recursive Tower of Hanoi moves |
| `display_array()` | Prints the contents of an array |
