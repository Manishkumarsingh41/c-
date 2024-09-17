#include<iostream>
using namespace std;
int main(){
    int n,evenSum=0;
    cout<<"Enter the value of n:"<<endl;
    cin>>n;
    for(int i=1;i<=n;i++){
        if(i%2==0){ 
            evenSum=evenSum+i;
        }
    }
    cout<<"The evenSum is:"<<evenSum<<endl;
    return 0;
}