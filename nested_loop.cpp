#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"Enter no of line"<<endl;
    cin>>n;
    cout<<"Enter no of starts"<<endl;
    cin>>m;
    cout<<"This is shape of stars"<<endl;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cout<<"*";
            }
            cout<<endl;

        }
        return 0;
    }