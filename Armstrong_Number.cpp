#include<iostream>
#include<math.h>
#include<stdlib.h>
using namespace std;

int main(){
    int lower_limit;
    int upper_limit;
    int length=0;
    
    cout<<"Enter Lower Limit: ";
    cin>>lower_limit;
    cout<<endl<<"Enter Upper Limit: ";
    cin>>upper_limit;

    cout<<"Armestrong Number are : ";

    for(int i=lower_limit;i<upper_limit;++i){
        int temp=i;
        int Sum=0;
        while(temp!=0){
            int rem;
            rem=temp%10;
            Sum+=rem*rem*rem; //Sum+=pow(rem,3);
            temp=temp/10;
        }

        if(i==Sum){
            cout<<i<<"  ";
        }
    }
return 0;
}


// int armsStrong(int num)
// {
//     int sum=0;
//     while(num>0)
//     {
//         int rem=num%10;
//         sum=sum+pow(rem,3);
//         num=num/10;
//     }

//     return sum;
// }

// int main()
// {
//     int num1,num2;
//     cout<<"Enter the range:";
//     cin>>num1>>num2;
//     for(int i=num1;i<=num2;++i)
//     {
//          if(i==armsStrong(i))
//         {
//         cout<<"Asrmstromng number is: "<<i<<"\n";
//         }
//     // else
//     // {
//     //     cout<<i<<" is Not a armsstrong number\n";
//     // }
//     }
//    return 0;
// }