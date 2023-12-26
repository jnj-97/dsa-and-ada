dimensions=[]
for i in range(2):
    dimensions.append(int(input("Enter the dimension of the array: ")))
array=[]
row=[]
for i in range(0,dimensions[0]):
    for j in range(0,dimensions[1]):
        row.append(int(input("Enter the value for {} {}: ".format(i,j))))
    array.append(row)
    row=[]
search=int(input("Enter the search element"))
flag=False
for i in range(0,dimensions[0]):
    for j in range(0,dimensions[1]):
        if(array[i][j]==search):
            print("The search element is present at index {} {}: ".format(i,j))
            flag==True
if(flag==False):
    print("Search element Does not exist in Array")
