#include <iostream>
#include <serial/serial.h>
using namespace std;

int main()
{
    cout<<"testci"<<endl;
    serial::Serial s;
    cout<<"baudrate :"<<s.baudrate<<endl;
    return 0;
}