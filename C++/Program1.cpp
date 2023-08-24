#include <iostream>
using namespace std;
int main(){
    int m,n,search,flag=0;
    cout<<"Enter the dimensions of the matrix";
    cin>>m>>n;
    int arr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<"Enter the value for position "<<i<<" "<<j<<":";
            cin>>arr[i][j];
            cout<<"\n";
        }
    }
    cout<<"Enter the search element: ";
    cin>>search;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(arr[i][j]==search)
                {
                    cout<<search<<" is present in position "<<i<<" "<<j<<"\n";
                    flag++;
                    }
        }
    }
    if(flag==0)
        cout<<search<<" is not present in array";
    return 0;
}