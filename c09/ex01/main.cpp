#include "RPN.hpp"

//Container used: STD::STACK

int main(int argc, char **argv){

    if (argc != 2)
    {
        std::cout << "Invalid input" << std::endl;
        return(1);
    }
    Calculator(argv[1]);

}