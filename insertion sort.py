def insertion_sort(arr):
    for i in range(1, len(arr)):
        key = arr[i]
        j = i - 1
        while j >= 0 and key < arr[j]:
            arr[j+1] = arr[j]
            j -= 1
        arr[j+1] = key

    return arr

my_list = [1, 9, 10, 12, 60, 6, 5]
sorted_list = insertion_sort(my_list)
print(sorted_list)
