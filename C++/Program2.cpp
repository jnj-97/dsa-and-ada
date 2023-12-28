#include <iostream>
using namespace std;
int main(){
int length1,width1,length2,width2,operation;
int array1[length1][width1],array2[length2][width2];
cout<<"Enter the length of matrix 1: ";
cin>>length1;
cout<<"\nEnter the width of matrix 1: ";
cin>>width1;
cout<<"\nEnter the length of matrix 2: ";
cin>>length2;
cout<<"\nEnter the width of matrix 2: ";
cin>>width2;
for(int i=0;i<length1;i++){
    for(int j=0;j<width1;j++){
        cout<<"\nEnter the value of Matrix 1 at position "<<i<<" "<<j<<": ";
        cin>>array1[i][j];
    }
}
for(int i=0;i<length2;i++){
    for(int j=0;j<width2;j++){
        cout<<"\nEnter the value of Matrix 2 at position "<<i<<" "<<j<<": ";
        cin>>array2[i][j];
    }
}
int output[length1][width1];
do{
    cout<<"\nEnter 1 for Addition\nEnter 2 for Subtraction\nEnter 3 for Multiplication\nEnter 0 to exit the program";
    cin>>operation;
    for(int i=0;i<length2;i++){
    for(int j=0;j<width2;j++){
       output[i][j]=0;
    }
    }
    switch (operation)
    {
    case 1:
   
    if(length1==length2 && width1==width2){
        for(int i=0;i<length1;i++){
            for(int j=0;j<width1;j++){
                output[i][j]=array1[i][j]+array2[i][j];
            }
        }
        for(int i=0;i<length1;i++){
            for(int j=0;j<width1;j++){
            cout<<"\nThe value of Resultant matrix  position "<<i<<" "<<j<<" is: "<<output[i][j];
            }
        }
        break;
    }
    else{
        cout<<"\nMatrix dimensions do not match";
        break;
    }
     case 2:
    
    if(length1==length2 && width1==width2){
        for(int i=0;i<length1;i++){
            for(int j=0;j<width1;j++){
                output[i][j]=array1[i][j]-array2[i][j];
            }
        }
        for(int i=0;i<length1;i++){
            for(int j=0;j<width1;j++){
             cout<<"\nThe value of Resultant matrix  position "<<i<<" "<<j<<" is: "<<output[i][j];
            }
        }
        break;
    }
    else{
        cout<<"\nMatrix dimensions do not match";
        break;
    }
    case 3:
    if(width1!=length2){
        cout<<"\nMatrix Dimensions are not suitable for multiplication";
        break;
    }
    else{   
        
        for(int i=0;i<length1;i++){
            for(int j=0;j<width2;j++){
                output[i][j]=0;
            for(int k=0;k<width1;k++){
                output[i][j]+=array1[i][k]*array2[k][j];
            }
            }

        }
        for(int i=0;i<length1;i++){
            for(int j=0;j<width2;j++){
            cout<<"\nThe value of Resultant matrix  position "<<i<<" "<<j<<" is: "<<output[i][j];
            }
        }
        break;
        
    }   
    default:
        break;
    }
}while(operation!=0);
return 0;
}
