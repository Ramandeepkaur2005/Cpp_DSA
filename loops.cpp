#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter num: ";
    cin>>num;
    int i=1;
    while(i<=num){
        cout<<i<<" ";
        i++;
    }
    cout<<"\n";


    //sum of n numbers
    int sum=0;
    int j=1,n;
    cout<<"Enter num: ";
    cin>>n;

    while(j<=n){
        sum=sum+j;
        j++;
    }
    cout<<"sum of "<<n<<" number is "<<sum<<endl;


    //sum of all even nos
    int sum1=0;
    int l=1,n1;
    cout<<"enter n: ";
    cin>>n1;
    while(l<=n1){
        if(l%2==0){
            sum1=sum1+l;
        }
        l++;
    }
    cout<<"sum of even numbers is "<<sum1<<endl;


    //if prime or not
    int z=2,n2;
    cout<<"enter the number to check if prime: ";
    cin>>n2;
    while(z<n2){
        if(n2%z!=0){
            cout<<n2<<"is prime"<<endl;
            break;
        }
        else{
            cout<<n2<<" is not prime"<<endl;
            break;
        }
    z++;
    }
}