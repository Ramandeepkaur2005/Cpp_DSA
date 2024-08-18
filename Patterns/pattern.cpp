#include<iostream>
using namespace std;
int main(){
     /* pattern 1
        * * * *
        * * * *
        * * * *
        * * * *
    */
    int i=1,j,n; 
    cout<<"Enter number of rows: ";
    cin>>n;
    while(i<=n){
        j=1;
        while(j<=n){
            cout<<" * ";
            j++;
        }
        cout<<"\n";
        i++;
    }
 }