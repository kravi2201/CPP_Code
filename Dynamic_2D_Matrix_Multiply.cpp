#include<iostream>
using namespace std;
int main(){
    
    int r1,r2;
    int c1,c2;
    cout<<"Enter the row and column of first matrix: ";
    cin>>r1>>c1;
    cout<<"\nEnter the row and column of Second matrix: ";
    cin>>r2>>c2;

    while(r1!=c2){
        cout<<"\nThe no of row and column are not same..........";
        cout<<"\nEnter the row and column of first matrix: ";
        cin>>r1>>c1;
        cout<<"\nEnter the row and column of Second matrix: ";
        cin>>r2>>c2;
    }

    int** arr = new int*[r1];
    int** arr1 = new int*[r2];
    for (int i = 0; i < r1; ++i)
        arr[i] = new int[c1];
    for (int i = 0; i < r2; ++i)
        arr1[i] = new int[c2];

    cout<<endl<<"Enter values of First Matrix: "<<endl;

    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            cout<<endl<<"Enter "<<i<<"th, "<<j<<"th index value: ";
            cin>>arr[i][j];
        }
    }

    cout<<endl<<"Enter values of second Matrix: "<<endl;

    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            cout<<endl<<"Enter "<<i<<"th, "<<j<<"th index value: ";
            cin>>arr1[i][j];
        }
    }

    cout<<endl<<"Values of First Matrix: "<<endl;

    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<endl<<"Values of Second Matrix: "<<endl;

    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            cout<<arr1[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}