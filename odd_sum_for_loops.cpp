#include<iostream>
using namespace std;
int main(){
    int n,oddsum=0;
    cout<<"Enter the value of n:"<<endl;
    cin>>n;
    for(int i=1;i<=n;i++){
        if(i%2 !=0){ 
            oddsum=oddsum+i;
        }
    }
    cout<<"The oddsum is:"<<oddsum<<endl;
    return 0;
}