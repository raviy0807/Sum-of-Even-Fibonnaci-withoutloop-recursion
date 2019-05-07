#include <iostream>
#include <boost/multiprecision/float128.hpp>

using namespace std;
using namespace boost::multiprecision;

class Fibonacci{
   
    float128 even_sum(int num){
    }

public:

    Fibonacci(){
    }

    unsigned long long int get_even_sum(int limit){
    }
};


int main()
{

    Fibonacci obj;
    int m_input;
    cout<<"Enter the Fibonacci Range : ";
    cin>>m_input;
    cout<<obj.get_even_sum(m_input);
    return 0;
}
