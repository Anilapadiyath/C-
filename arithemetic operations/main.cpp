#include <iostream>
#include <iomanip>
using namespace std;
 float x,y,ans;
 void print();
 void add();
 void sub();
 void mul();
 void div();
int main()
{
    int num;
    char ch;
    cout << "Enter 1stnumber=";
    cin>>x;
    cout << "Enter 2ndnumber=";
    cin>>y;
    while(1)
    {
    cout<<"\nDo you want to continue? y or n?";
    cin>>ch;
    if(ch=='y')
    {
    cout<<"\n1 ADDITION";
    cout<<"\n2 SUBTRACT";
    cout<<"\n3 MULTIPLY";
    cout<<"\n4 DIVISION";
    cout<<"\n5 PRINT";
    cout<<"\nselect your option:";
    cin>>num;
    switch(num)
    {
        case 1: add();
                break;
        case 2: sub();
                break;
        case 3: mul();
                break;
        case 4: div();
                break;
        case 5: print();
                break;
    }
  }
   else
    {
        break;
    }
    }
    return 0;

}
void print()
{
    cout<<"\n";
    cout<<"ANSWER:"<<setprecision(3)<<ans;
}

void add()
{
    ans=x+y;
}
void sub()
{
    ans=x-y;
}
void mul()
{
    ans=x*y;
}
void div()
{
    ans=x/y;
}

