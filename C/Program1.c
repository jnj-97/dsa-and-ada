#include <stdio.h>
int main(){
    int length,width;
    printf("Enter the length of the array\n");
    scanf("%d",&length);
    printf("Enter the width of the array\n");
    scanf("%d",&width);
    int array[length][width];
    for(int i=0;i<length;i++){
        for(int j=0;j<width;j++){
            printf("Enter the element for position %d %d: ",i,j);
            scanf("%d",&array[i][j]);
        }
    }
    int flag=-1,search;
    printf("Enter the search element\n");
    scanf("%d",&search);
    for(int i=0;i<length;i++){
        for(int j=0;j<width;j++){
            if(array[i][j]==search){
            printf("%d is located at position %d %d",search,i,j);
            flag++;
            break;
            }
        }
    }
    if(flag==-1){
        printf("Search element not found");
    }
    return 0;
}