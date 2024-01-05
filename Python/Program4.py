queue=[]
head=-1
rear=-1
size=int(input("Enter the size of the array"))
while True:
    choice=int(input("\nEnter 1 for enqueue, 2 for dequeue, 3 for peek, and 0 to exit the program"))
    if(choice==1):
        if(head==(size-1)):
            print("Queue is Full")
        else:
            head+=1
            if(head==0):
                rear=0
            queue.append(int(input("Enter the element to enqueue")))
    if(choice==2):
        if(head==-1 or rear==-1):
            print("Queue is empty")
        else:
            print("The popped element is {}".format(queue[head]))
            head-=1
            queue.pop()
    if(choice==3):
        if(head==-1 or rear==-1):
            print("Queue is empty")
        else:
            print("The head element is {} and rear element is {}".format(queue[head],queue[rear]))
    if(choice==0):
        break
    