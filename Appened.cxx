#include <iostream>
#include <fstream>
int main() 
{
    std::ofstream Fatima("Tanzeela.txt", std::ios_base::app);
    if (!Fatima)
        std::cerr << "Failed to open file for appending!" << std::endl;
    Fatima << "Hello, world!" << std::endl;
    Fatima.close();
    return 0;
}
