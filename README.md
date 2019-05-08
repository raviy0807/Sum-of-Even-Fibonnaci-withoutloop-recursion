The project contains the implementation of finding the even fibonacci number, within the n fibonacci series.

The contraint is to use Binet Formula without loop and recursion.

##**Motivation :**
The [maths.surrey](http://www.maths.surrey.ac.uk/hosted-sites/R.Knott/Fibonacci/fibFormula.html) website contains the explanation of the formula and its practical usage.
// Source : http://www.maths.surrey.ac.uk/hosted-sites/R.Knott/Fibonacci/fibFormula.html

### **Steps:**
1. Solve the Binet Formula that consist of Golden as well as Silver ratio.
2. The silver ratio's contribution decreases with increase in series. Therefore we can reduce the formula in Phi terms. [Ref](http://www.maths.surrey.ac.uk/hosted-sites/R.Knott/Fibonacci/fibFormula.html).
3. In expansion of classical fibonacci formula, every 3rd digit is even number in the series.
4. Based on 2. and 3., we can use the **geometric sequence** to calculate the all even numbers within the range.

### **Implementation:**
1. Cmake is used as build tool.
2. Used float128 of boost library to maintain the precision and efficiency. [Ref](https://www.boost.org/doc/libs/1_61_0/libs/multiprecision/doc/html/boost_multiprecision/tut/floats.html)
3. I have used CLion Ide for the development.
4. Environment: Ubuntu 18.08

### **Issue**
1. COnversion from float128 to cpp_int.

