#include<iostream>
using namespace std;
int main(){

    int marks;
    cout<<"Enter your marks: ";
    cin>>marks;

    if(marks>=90){
        cout<<"Your grade is A"<<endl;
    
    }else if(marks>=80 && marks<90){
        cout<<"Your grade is B"<<endl;
        
    }else if(marks>=70 && marks<80){
        cout<<"Your grade is C"<<endl;
    
    }else if(marks>=60 && marks<70){
        cout<<"Your grade is D"<<endl;
    
    }else{
        cout<<"you are failed"<<endl;
    }
    return 0;
}