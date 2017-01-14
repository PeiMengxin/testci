#include <iostream>
#include <vector>
// #include <serial/serial.h>
// #include <opencv2/opencv.hpp>
using namespace std;

int main()
{
    cout<<"testci"<<endl;
    std::vector<int> v;
    for(int i = 0;i<5;i++)
    {
        v.push_back(i);
    }
    auto it = v.begin();
    cout<<*(it+2)<<endl;

    return 0;
}