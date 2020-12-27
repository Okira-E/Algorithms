#!/usr/bin/python3.8

arr = [1, 3, 4, 3, 4, 6, 11, 4, 43, 3, 23, 2, 3, 43, 35, 4,
       4, 56, 45, 7, 4, 3, 34, 34, 5, 2, 4, 53, 46, 3, 4, 43, 54]


def selection_sort1(arr: list):
    min = 9223372036854775807

    for index in range(len(arr)):
        for i in range(len(arr)):
            print(arr[i])
            if arr[i] < min:
                min = arr[i]
        arr[index] = min

    return arr


def selection_sort2(arr: list):

    # i indicates how many items were sorted
    for i in range(len(arr)-1):
        # To find the minimum value of the unsorted segment
        # We first assume that the first element is the lowest
        min_index = i
        # We then use j to loop through the remaining elements
        for j in range(i+1, len(arr)-1):
            # Update the min_index if the element at j is lower than it
            if arr[j] < arr[min_index]:
                min_index = j
        # After finding the lowest item of the unsorted regions, swap with the first unsorted item
        arr[i], arr[min_index] = arr[min_index], arr[i]


selection_sort2(arr)
print(arr)
