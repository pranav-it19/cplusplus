#include <iostream>

using namespace std;

int main()
{
int num1, num2,num3, max;
cout<<"Enter 3 numbers :";
cin>>num1>>num2>>num3;
if(num1>num2&& num1>num3)
    {
    max=num1;
cout<<"The greatest number is :"<<max;
}
else if(num2>num1 && num2>num3){
    max =num2;
    cout<<"The greatest number is :"<<max;
}
else{
    max=num3;
    cout<<"The greatest number is :"<<max;
}
    return 0;
}
