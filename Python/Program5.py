size=int(input("Enter the size of the array"))
arr=[]
for i in range(size):
    arr.append(int(input(f"Enter the element for position {i}: ")))
def partition(arr,low,high):
    pivot=arr[high]
    i=low-1
    for j in range(low,high):
        if arr[j]<pivot:
            i+=1
            temp=arr[j]
            arr[j]=arr[i]
            arr[i]=temp
    temp=arr[i+1]
    arr[i+1]=pivot
    arr[high]=temp
    return i+1
def quicksort(arr,low,high):
    if low<high:
        pivot=partition(arr,low,high)
        partition(arr,low,pivot-1)
        partition(arr,pivot+1,high)
quicksort(arr,0,len(arr)-1)
print("The sorted array is: ")
for i in arr:
    print(i)
    print("\t")