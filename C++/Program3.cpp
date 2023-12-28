#include <iostream>
using namespace std;
int main(){
    int size,option,head=-1;
    cout<<"Please Enter the size of the stack: ";
    cin>>size;
     int st[size];
    do{
        cout<<"\nEnter 1 for Push, 2 for Pop, 3 for peek, 4 for isFull, 5 for isEmpty, and 0 to exit the program\n";
        cin>>option;
       
        switch(option){
            case 1:
            if(head==(size-1)){
                cout<<"\nStack is full";
                break;
            }
            else{
                int temp;
                cout<<"\nEnter the element to push";
                cin>>temp;
                head++;
                st[head]=temp;
                break;
            }
            case 2:
            if(head==-1){
                cout<<"\nStack is empty";
                break;
            }
            else{
                cout<<"The popped element is: "<<st[head];
                head--;
                break;
            }
            case 3:
            if(head==-1){
                cout<<"\nStack is empty";
                break;
            }
            else{
                
                cout<<"\nThe head element is: "<<st[head];
                break;
            }
            case 4:
            if(head==(size-1)){
                cout<<"\nStack is full";
                break;
            }
            else{
                cout<<"\nStack is not Full";
                break;
            }
            case 5:
            if(head==-1){
                cout<<"\nStack is empty";
                break;
            }
            else{
                cout<<"\nStack is not empty";
                break;
            }
            case 0:
            cout<<"\nExiting the program";
            break;

            default:
            cout<<"\nInvalid input. Exiting Program";
        }

    }while(option!=0);
    return 0;
}