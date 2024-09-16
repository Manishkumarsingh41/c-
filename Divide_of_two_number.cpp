#include<iostream>
using namespace std;
int main(){
    int a,b ,Divide;
    cout<<"Enter the Value of a: ";
    cin>> a;
    cout<<"Enter the Value of b: ";
    cin>> b;
    cout<<"The Divide of a and b is : "<<(a/double(b))<<endl; //we use type casting for getting all value in decimal
    return 0;
}
