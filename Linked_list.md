# Documentation: Linked_list.cpp

## Purpose

This program demonstrates a singly linked list implemented with a `Node` class.
Each node stores an integer value and a pointer to the next node.

## Operations

The program provides functions for these linked-list operations:

- `traverse_list()` prints every value followed by `NULL`.
- `insertion_in_list()` inserts a value at the start, end, or a selected middle
  position.
- `deletion_in_list()` deletes the first node, last node, or a selected middle
  node.
- `updation_in_list()` changes the value at a selected position.

## Current Demo

The `main()` function creates the list `1 -> 2 -> NULL` and then:

1. Displays the initial list.
2. Opens the insertion menu with value `5` and position `3`.
3. Displays the list again.
4. Opens the deletion menu with position `5`.
5. Updates position `3` to the value `8`.
6. Displays the list after the update.

The insertion and deletion menus continue until the user enters `4`.

## Compile and Run

Using g++:

```bash
g++ Linked_list.cpp -o linked_list
./linked_list
```

On Windows with MinGW:

```powershell
g++ Linked_list.cpp -o linked_list.exe
.\linked_list.exe
```

## Important Notes

- Choose valid menu options and positions for the current list.
- The implementation does not yet validate empty-list operations, out-of-range
  positions, or insertion/deletion at every boundary case.
- Dynamically allocated nodes are deleted when removed, but the remaining list
  is not explicitly freed before the program exits.
