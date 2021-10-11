#include <cstdlib>
#include <iostream>
using namespace std;

void openDevice() { cout << "device is open." << endl; }
void resetDeviceStat() { cout << "device is reset." << endl; }
void closeDevice() { cout << "Close is closed." << endl; }

int main()
{
    atexit(resetDeviceStat);
    atexit(closeDevice);
    openDevice();
    exit(0);
}