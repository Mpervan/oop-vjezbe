#include<iostream>
#include<iomanip>


int main(){
    bool flag;
    std::cout << "unesi " << true << " - " << false << std::endl;
    std::cin >> flag;std::cout << std::noboolalpha << flag << std::endl;
    int a = 255;
    std::cout << "dec " << std::dec << a << std::endl;
    std::cout << "hex " << std::hex << a << std::endl;
    std::cout << "oct " << std::oct << a << std::endl;
    double pi = 3.141592;
    std::cout << "pi = " << std::fixed << std::uppercase;
    std::cout << std::setprecision(4) << std::setw(5) << std::setfill('*');
    std::cout << pi << std::endl;
}
