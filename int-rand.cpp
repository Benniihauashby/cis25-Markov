#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {

    srand(time(0));

    std::cout << rand() % 19 << std::endl;

    return 0;
}