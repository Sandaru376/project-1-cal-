#include <iostream>
using namespace std;

int main() {
    int num1,num2,result;
    char op;

    cout<<"Enter first number="<<endl;
    cin>>num1;
    cout<<"select op(+,-,*,/)"<<endl;
    cin>>op;
    cout<<"Enter second number="<<endl;
    cin>>num2;

cout<<"Enter seconhghgd number="<<endl;
    switch(op){
    case '+':
        result=num1+num2;
        break;
     case '-':
        result=num1-num2;
        break;
     case '*':
        result=num1*num2;
        break;
     case '/':
         if (num2 !=0)
            result=num1/num2;
         else{
             cout<<"invalid"<<endl;
             return 1;
         }
         break;
     default:
        cout<<"error"<<endl;
        return 1;


    }


    cout<<"result is="<<result;
    cout<<"test dev branch is="<<result;
    cout<<"test dev branch is="<<result;

    return 0;
}
