#include <iostream>
#include <boost/multiprecision/float128.hpp>

using namespace std;
using namespace boost::multiprecision;

class Fibonacci{
    float128 phi;
    float128 a;
    // Source : http://www.maths.surrey.ac.uk/hosted-sites/R.Knott/Fibonacci/fibFormula.html
    // Based on the source, we reduce the formula to on phi as 'V' contribute neglagible and its distance from zero keeps on increasing with sequence.

    float128 even_sum(int num){

        // Calculate the Gemotric Sum i.e. Sum = a * ((1+r**n)/(1-r))
        // n = (1 + r **n )
        float128 n = 1 - pow(phi,3*num);
        // d = (1 - r)
        float128 d = 1 - pow(phi,3);
        // Gm of even number = a * (n/d)
        float128 sum = a * (n/d);

        return sum;
    }

public:

    Fibonacci(){
        phi = (1+sqrt(5))/2;
        a = pow(phi,3)/sqrt(5);
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
