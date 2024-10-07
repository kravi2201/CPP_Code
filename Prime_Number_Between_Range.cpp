#include<iostream>

using namespace std;

int main(){
    int lower_limit;
    int upper_limit;
    int count;

    cout<<"Enter Lower Limit: ";
    cin>>lower_limit;
    cout<<"\n\nEnter Upper Limit: ";
    cin>>upper_limit;
    cout<<endl;
    cout<<"Prime Numbers are : ";
    for(int i=lower_limit;i<upper_limit;i++){
        count=1;
        for(int j=2;j<i;j++){
            if(i%j==0){
                count=0;
                exit;
            }
        }
        if(count==1){
            cout<<i<<"  ";
        }
    }

    return 0;
}
