#include<iostream>
using namespace std;
int main( int argc, char*argv[])
{
int a,b,c;
cout<<"enter a\n";
cin>>a;
cout<<"enter b\n";
cin>>b;
c=a; a=b; b=c;
cout<<"after swapping a= "<<a<<" b="<<b;
return 0;
}
