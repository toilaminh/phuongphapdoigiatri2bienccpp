#include <iostream>

using namespace std;

int main()
{
    system("cls");
    int a=1;
    int b=2;
    int temp;
    int c=a,d=b;
    cout << "Gia tri a va b truoc khi doi gia tri" << endl; //Khong dung bien phu
    cout << a << " " << b << endl;
    a=a*10+b;
    b=a/10;
    a=a%10;
    cout << "Gia tri a va b sau khi doi gia tri" << endl;
    cout << a << " " << b << endl;
    cout << "Gia tri c va d truoc khi doi gia tri" << endl; //Dung bien phu
    cout << c << " " << d << endl;
    temp=c;
    c=d;
    d=temp;
    cout << "Gia tri c va d sau khi doi gia tri" << endl;
    cout << c << " " << d << endl;
    return 0;
}