#include<iostream>
int main(){
    int a,b;

    std::cout << "Enter numbers: ";
    std::cin >> a >> b;

    int sum = a+b;

    std::cout << "Sum of "
            << a << " and " << b << " is "
            << sum << std::endl;
    return 0;
}