#include<iostream>
using namespace std;
int main(){
  int a,b,c;
  int ch;
cout<<"1). Addition"<<endl;
cout<<"2). Substraction"<<endl;
cout<<"3). Multiplition"<<endl;
cout<<"4). Division"<<endl;
cout<<"5). Modulo"<<endl;
cout<<"6). Exit"<<endl;

cout<<"Enter value between (1-6) according to menu bar = ";
cin>>ch;

switch(ch){
  case 1:
  goto add;

  case 2:
  goto sub;

  case 3:
  goto mul;

  case 4:
  goto div;

  case 5:
  goto mod;

  case 6:
  return 0;

  default:
  cout<<"Wrong choise try again :)"<<endl;
  return 0;
}
add:
cout<<"\nEnter first number : ";
cin>>a;
cout<<"Enter second number : ";
cin>>b;
c=a+b;
cout<<"\nThe sum of "<<a<<" and "<<b<<" is = "<<c<<endl;
return 0;

sub:
cout<<"\nEnter first number : ";
cin>>a;
cout<<"Enter second number : ";
cin>>b;
c=a-b;
cout<<"\nThe sum of "<<a<<" and "<<b<<" is = "<<c<<endl;
return 0;

mul:
cout<<"\nEnter first number : ";
cin>>a;
cout<<"Enter second number : ";
cin>>b;
c=a*b;
cout<<"\nThe sum of "<<a<<" and "<<b<<" is = "<<c<<endl;
return 0;

div:
cout<<"\nEnter first number : ";
cin>>a;
cout<<"Enter second number : ";
cin>>b;
c=a/b;
cout<<"\nThe sum of "<<a<<" and "<<b<<" is = "<<c<<endl;
return 0;

mod:
cout<<"\nEnter first number : ";
cin>>a;
cout<<"Enter second number : ";
cin>>b;
c=a%b;
cout<<"\nThe sum of "<<a<<" and "<<b<<" is = "<<c<<endl;
return 0;
}
