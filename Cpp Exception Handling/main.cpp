
#include<iostream>
using namespace std;

// int division(int a, int b) {
//    if( b == 0 ) {
//       throw "Division by zero condition!";
//    }
//    return (a/b);
// }


int main()  {
    int a, b;
    cin>>a>>b;
    try
    {
     int x = division(a, b);
     std::cout<<x<<std::endl;
        
    }
    catch(...)
    {
        std::cout<<"Division by zero condition!"<<std::endl;
    }
    // print the result in try else exception in catch
    // Your code goes here
    return 0;
}
