#include <iostream>
#include <serial/serial.h>
#include <aruco/aruco.h>
using namespace std;

int main()
{
    cout<<"testci"<<endl;
    serial::Serial s;
    cout<<"baudrate :"<<s.baudrate<<endl;

    aruco::Marker m;

    return 0;
}