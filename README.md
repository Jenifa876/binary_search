# Binary_search

# Introduction
This project demonstrates a binary search algorithm in C++. Binary search is an efficient algorithm for finding an element in a sorted array by repeatedly dividing the search interval in half.

# Features
Accepts a list of integers from the user.
Sorts the list to prepare for binary search.
Allows the user to input a key to search for in the list.
Returns the position of the key if found or a message if the key is not present.

# Explanation
**bin_search function:** Uses binary search to look for the key. It checks the middle element in the array; if the middle element is the key, it returns the index. Otherwise, it adjusts the low and high pointers based on whether the middle element is greater or less than the key.
**Main function:** Accepts input for the array size, elements, and search key, then sorts the array before performing the binary search.

# Example Output
Enter the number of elements: 5
Enter the elements: 50 20 30 10 40
Sorted array: 10 20 30 40 50
Enter the key element: 30

Element is found at the position: 3
