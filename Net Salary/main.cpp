#include <iostream>

using namespace std;

int main()
{
int basicSal;
int percentageAllow;
int percentageDeduct;
int netSal;
cout<<"Enter the Basic Salary :";
cin>>basicSal;
cout<<"Enter the percentage Allowance :";
cin>>percentageAllow;
cout<<"Enter the percentage deduct :";
cin>>percentageDeduct;
netSal = basicSal + (basicSal * percentageAllow/100 - basicSal * percentageDeduct/100);
cout<<"Net Salary is :"<<netSal;
    return 0;
}
