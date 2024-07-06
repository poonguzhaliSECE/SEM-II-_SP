def can_form_arithmetic_progression(arr):
    if len(arr) <= 1:
        return True
    arr.sort()
    diff = arr[1] - arr[0]
    for i in range(1, len(arr)):
        if arr[i] - arr[i-1] != diff:
            return False
    return True

arr_input = input("Enter the array elements separated by commas: ")
arr = [int(x) for x in arr_input.split(',')]

result = can_form_arithmetic_progression(arr)
print(result)
