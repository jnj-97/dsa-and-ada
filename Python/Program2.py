length=int(input("Enter the length of the arrays"))
width=int(input("Enter the width of the arrays"))
rows=[]
array1=[]
array2=[]
for i in range(length):
    rows=[]
    for j in range (width):
        rows.append(int(input("Enter the element for Matrix 1 in position: {} {}".format(i,j))))
    array1.append(rows)
rows=[]
for i in range(length):
    rows=[]
    for j in range (width):
        rows.append(int(input("Enter the element for Matrix 2 in position: {} {}".format(i,j))))
    array2.append(rows)

while True:
    choice=int(input("Enter 1 for addition, 2 for Subtraction, 3 for Multiplication, or enter 0 to exit the program"))
    result=[]
    if(choice==1):
        for i in range(length):
            row=[]
            for j in range(width):
                row.append(array1[i][j]+array2[i][j])
            result.append(row)
        print("The resultant matrix is "+str(result))
        break
    if(choice==2):
        for i in range(length):
            row=[]
            for j in range(width):
                row.append(array1[i][j]-array2[i][j])
            result.append(row)
        print("The resultant matrix is "+str(result))
        break
    if(choice==3):
         for i in range(length):
            row=[]
            for j in range(width):
                row.append(0)
            result.append(row)
         for i in range(length):
            for j in range(width):
                result[i][j]=0
                for k in range(width):
                    result[i][j]+=array1[i][k]*array2[k][j]
         print("The resultant matrix is "+str(result))
         break
    if(choice==0):
        break