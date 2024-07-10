#include<iostream>
using namespace std;

int main()
{
    float num1,num2;
    char op;

    while (true)
    {
        cout<<"Choose an operation: \n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division"<<endl;
        cin>>op;
        if(op == 'q'){
            break;
        }
            
        switch (op)
        {
        case '1':
            cout<<"Enter 1st num: ";
            cin>>num1;
            cout<<"Enter 2nd num: ";
            cin>>num2;
            cout<<"The value is : "<<num1+num2<<endl;
            break;
        case '2':
            cout<<"Enter 1st num: ";
            cin>>num1;
            cout<<"Enter 2nd num: ";
            cin>>num2;
            cout<<"The value is : "<<num1-num2<<endl;
            break;
        case '3':
            cout<<"Enter 1st num: ";
            cin>>num1;
            cout<<"Enter 2nd num: ";
            cin>>num2;
            cout<<"The value is : "<<num1*num2<<endl;
            break;
        case '4':
            cout<<"Enter 1st num: ";
            cin>>num1;
            cout<<"Enter 2nd num: ";
            cin>>num2;
            cout<<"The value is : "<<float(num1/num2)<<endl;
            break;
        default:
            cout<<"Enter valid number"<<endl;
            break;
        }
    
    }
}