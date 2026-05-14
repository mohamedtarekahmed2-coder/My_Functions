#include <iostream>
#include <cmath>
using namespace std;

int Round(float num){
    return num + 0.5;
}

int Floor(float num){
    return num;
}

int Ceil(float num){
    float fl = num - static_cast<int>(num);
    if (fl == 0)
        return num;
    else 
        return num + 1;
}

int main()
{
    // cout << round(1.8) << ' ' << Round(1.8) << '\n';
    // cout << floor(1) << ' ' << Floor(1) << '\n';
    cout << ceil(1.3) << ' ' << Ceil(1.3) << '\n';
    return 0;
}