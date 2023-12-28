#include <stdio.h>
int main(){
int length1,width1,length2,width2,operation;
int array1[length1][width1],array2[length2][width2];
printf("Enter the length of matrix 1: ");
scanf("%d",&length1);
printf("\nEnter the width of matrix 1: ");
scanf("%d",&width1);
printf("\nEnter the length of matrix 2: ");
scanf("%d",&length2);
printf("\nEnter the width of matrix 2: ");
scanf("%d",&width2);
for(int i=0;i<length1;i++){
    for(int j=0;j<width1;j++){
        printf("\nEnter the value of Matrix 1 at position %d %d: ",i,j);
        scanf("%d",&array1[i][j]);
    }
}
for(int i=0;i<length2;i++){
    for(int j=0;j<width2;j++){
        printf("\nEnter the value of Matrix 2 at position %d %d: ",i,j);
        scanf("%d",&array2[i][j]);
    }
}
int output[length1][width1];
do{
    printf("\nEnter 1 for Addition\nEnter 2 for Subtraction\nEnter 3 for Multiplication\nEnter 0 to exit the program");
    scanf("%d",&operation);
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
            printf("\nThe value of Resultant matrix  position %d %d is %d",i,j,output[i][j]);
            }
        }
        break;
    }
    else{
        printf("\nMatrix dimensions do not match");
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
            printf("\nThe value of Resultant matrix  position %d %d is %d",i,j,output[i][j]);
            }
        }
        break;
    }
    else{
        printf("\nMatrix dimensions do not match");
        break;
    }
    case 3:
    if(width1!=length2){
        printf("\nMatrix Dimensions are not suitable for multiplication");
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
            printf("\nThe value of Resultant matrix  position %d %d is %d",i,j,output[i][j]);
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
