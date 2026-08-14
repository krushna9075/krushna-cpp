#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n,ch,a,b,sum,substract,multiply,division,square,cube,squareroot,fact=1;
    cout<<"1.sum\n";
    cout<<"2.substract\n";
    cout<<"3.multiply\n";
    cout<<"4.division\n";
    cout<<"5.square\n";
    cout<<"6.cube\n";
    cout<<"7.squareroot\n";
    cout<<"8.factorial\n";
    cout<<"enter your choice: ";
    cin>>ch;
    
    switch(ch)
    {
    case 1:cout<<"enter two numbers: ";
    cin>>a>>b;
    sum=a+b;
    cout<<"sum is "<<sum<<endl;
    break;

    case 2:cout<<"enter two numbers: ";
    cin>>a>>b;
    substract=a-b;
    cout<<"sub is "<<substract<<endl;
    break;

    case 3:cout<<"enter two numbers: ";
    cin>>a>>b;
    multiply=a*b;
    cout<<"mul is "<<multiply<<endl;
    break;

    case 4:cout<<"enter two numbers: ";
    cin>>a>>b;
    division=a/b;
    cout<<"div is "<<division<<endl;
    break;

    case 5:cout<<"enter your numbers: ";
    cin>>n;
    square=n*n;
    cout<<"sq is "<<square<<endl;
    break;

    case 6:cout<<"enter your numbers: ";
    cin>>n;
    square=n*n*n;
    cout<<"cube is "<<cube<<endl;
    break;

    case 7:cout<<"enter your numbers: ";
    cin>>n;
    squareroot=sqrt(n);
    cout<<"squareroot is "<<squareroot<<endl;
    break;

    case 8:cout<<"enter your numbers: ";
    cin>>n;
    for(int i=1;i<=n;i++)
    fact=fact*i;
    cout<<"factorial is "<<fact<<endl;
    break;
    
    default:
        cout<<"invalid choice";
    }
    return 0;
    
}