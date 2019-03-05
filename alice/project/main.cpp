#include <iostream>

using namespace std;

int main()
{
    cout<<" Enter A and B:";
    int a,b,max;
    cin>>a>>b;
    cout << "A + B = " << a + b << '\n'
     << "A - B = " << a - b << '\n'
     << "A * B = " << a * b << '\n'
     << "A / B = " << a / b << '\n';
    if(a+b>a-b && a+b>a*b && a+b>a/b)
        max=a+b;
    if(a-b>a+b && a-b>a*b && a-b>a/b)
        max=a-b;
    if(a*b>a-b && a*b>a+b && a*b>a/b)
        max=a*b;
    if(a/b>a-b && a/b>a*b && a/b>a+b)
        max=a/b;
    cout<<"MAX"<<max<<'\n';
}
