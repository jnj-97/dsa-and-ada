#include <iostream>
using namespace std;
int main(){
    int n,output,head=-1,rear=-1;
    cout<<"Enter the size of the queue\n";
    cin>>n;
    int queue[n];
    do{
        cout<<"\n Press 1 for enqueue, 2 for dequeue, 3 for peek and 0 to exit the program\n";
        cin>>output;
        switch(output){
            case 1:
            if(head==(n-1)){
                cout<<"Queue is full";
                }
            else{
                cout<<"Enter the element to enqueue\n";
                head++;
                if (head==0){
                    rear++;
                }
                cin>>queue[head];
            }
            break;
            case 2:
            if(rear==-1){
                cout<<"Queue is empty\n";
            }
            else{
                cout<<"The dequeued element of the queue is "<<queue[head];
                head--;
                if(head==-1){
                    rear--;
                }
            }
            break;
            case 3:
            if(rear==-1){
                cout<<"Queue is empty\n";
            }
            else{
                cout<<"The first element is "<<queue[rear]<<" and the last element is "<<queue[head];
            }
            break;
        }
    }while(output!=0);
    return 0;
}