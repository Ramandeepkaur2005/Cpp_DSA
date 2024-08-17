#include<iostream>
using namespace std;
int main(){

    //even odd
    int n;
    cout<<"enter the value of n"<<endl;
    cin>>n;
    if(n%2==0){
        cout<<"even number" <<endl;
    }
    else{
        cout<<"odd number" <<endl;
    }


    //a number is positive ,negative
    int number;

  cout << "Enter an integer: ";
  cin >> number;

  if (number > 0) {
    cout << "You entered a positive integer: " << number << endl;
  }
  else if(number < 0) {
    cout << "You entered a negative integer: " << number << endl;
  }
else{
  cout << "zero" <<endl;
}

//result remarks of students
int marks;
cout<<"Enter the marks ";
cin>>marks;
if(marks>=100){
    cout<<"genius" <<endl;
}
else if(marks>=90 && marks<=99){
    cout<< "outstanding" <<endl;
}
else if(marks>=80 && marks<=89){
    cout<< "Excellent" <<endl;
}
 else if(marks>=70 && marks<=79){
    cout<< "Very Good" <<endl;
}
 else if(marks>=60 && marks<=69){
    cout<< "Good" <<endl;
}
else{
    cout<<"Pass" <<endl;
} 

//print if cahracter is of lowercase , uppercase , numeric
char ch;
cout<<"Enter character";
cin>>ch;
if(ch>='A' && ch<='Z'){
    cout<<"Uppercase";
}
else if(ch>='a' && ch<='z'){
    cout<<"lowecase";
}
else{
cout<<"numeric value";
}

//print whether a number is single digit , two digit , three digit , 
int num;
cout<<"Enter the number";
cin>>num;
if(num>=0 && num<=9){
    cout<<"single digit number";
}
else if(num>=10 && num<=99){
    cout<<"two digit number";
}
else if(num>=100 && num<=999){
    cout<<"three digit number";
}
else{
    cout<<"thank you!";
}
    return 0;
}