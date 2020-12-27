#!/usr/bin/python3.8

arr = [1, 3, 4, 3, 4, 6, 11, 4, 43, 3, 23, 2, 3, 43, 35, 4,
       4, 56, 45, 7, 4, 3, 34, 34, 5, 2, 4, 53, 46, 3, 4, 43, 54]


def bubble_sort(arr: list):

    for _ in arr:
        for i in range(len(arr)):
            if i == len(arr) - 1:
                break
            if arr[i] > arr[i + 1]:
                arr[i], arr[i + 1] = arr[i + 1], arr[i]

    return arr


print(bubble_sort(arr))
