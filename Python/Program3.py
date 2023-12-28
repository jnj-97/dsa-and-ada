head=-1
size=int(input("Enter the size of the stack"))
stack=[]
while True:
    option=int(input("Enter 1 for push, 2 for pop, 3 for peek, 4 for isFull, 5 for isEmpty, and 0 to exit the program"))
    if(option==1):
        if(head==(size-1)):
            print("Stack is full")
        else:
            head+=1
            stack.append(int(input("Enter the element to push")))
    if(option==2):
        if(head==-1):
            print("Stack is Empty")
        else:
            print("The popped element is {}".format(stack[head]))
            head-=1
            stack.pop()
    if(option==3):
        if(head==-1):
            print("Stack is empty")
        else:
            print("The head element is {}".format(stack[head]))
    if(option==4):
        if(head==(size-1)):
            print("Stack is full")
        else:
            print("Stack is not full")
    if(option==5):
        if(head==-1):
            print("Stack is empty")
        else:
            print("Stack is not empty")
    if(option==0):
        break