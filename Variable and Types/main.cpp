#include<iostream>
#include <iomanip> 
using namespace std;

int main()  {
    // YOUR CODE GOES HERE
    // Please take input and print output to standard input/output (stdin/stdout)
    // E.g. 'cin' for input & 'cout' for output
    int i;
    long l;
    char c;
    float f ;
    double d;
    std::cin>>i>>l>>c>>f>>d;
    std::cout<<i<<std::endl;
    std::cout<<l<<std::endl;
    std::cout<<c<<std::endl;
    std::cout<<std::fixed<<std::setprecision(3)<<f<<std::endl;
    std::cout<<std::fixed<<std::setprecision(9)<<d<<std::endl;
    return 0;
}
