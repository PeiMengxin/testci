#include <iostream>
#include <serial/serial.h>
#include <aruco/aruco.h>
#include <opencv2/opencv.hpp>
using namespace std;

int main()
{
    cout<<"testci"<<endl;
    serial::Serial s;
    cout<<"baudrate :"<<s.baudrate<<endl;

    aruco::Marker m;

    cout<<"opencv:"<<CV_VERSION<<endl;

    return 0;
}