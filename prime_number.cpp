#include<iostream>
using namespace std;
int main(){
    int i,n;
    cout<<"Enter the number: ";
    cin>>n;
    for(i=2;i<=i*i;i++){ //you can also write this condition (i=2;i<=i*i;i++)
        if(n%i==0){
            cout<<"The number is not prime";
            break;  
    }else{
        cout<<"The number is prime"<<endl;

    }
    return 0;
}
}