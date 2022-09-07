#include <iostream>

int main()
{

    int n;
    int a = 0;
    int digit;
    std::cin >> n;
    while (n > 0)
    {
        digit = n % 10;
        a = a * 10 + digit;
        n = n / 10;
    }
    std::cout << a << std::endl;

    return 0;
}
