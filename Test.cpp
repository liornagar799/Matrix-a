#include "doctest.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
using namespace std;

#include "Matrix.hpp"
using namespace zich;


std::vector<double> identity1 = {1, 0, 0, 0, 1, 0, 0, 0, 1};
zich::Matrix a{identity1, 3, 3};
std::vector<double> identity2 = {-1, 0, 0, 0, -1, 0, 0, 0, -1};
zich::Matrix b{identity2, 3, 3}; 
std::vector<double> arr1 = {3, 0, 0, 0, 3, 0, 0, 0, 3};
Matrix c{arr1, 3, 3};
std::vector<double> arr2= {3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0};
Matrix d{arr2, 4, 3};
std::vector<double> arr3= {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
Matrix e{arr3, 4, 3};
std::vector<double> arr4= {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
Matrix f{arr4, 4, 3};
std::vector<double> arr5= {6, 0, 0, 0, 6, 0, 0, 0, 6, 0, 0, 0};
Matrix h{arr5, 4, 3};

TEST_CASE("Good input") {
    CHECK(((-a) == b));
    CHECK((((-b)*3) == c));
    CHECK(((a*3) == (1*c)));
    CHECK(((3*b) == c));
    CHECK(((9*a) == (c*3)));
    CHECK((a <= c));
    CHECK((b < c));
    CHECK((a > b));
    CHECK(((e*f)==e));
    CHECK(((f)!=(-f)));
    CHECK(((e*a)==(e*b)));
    CHECK((f > d));
    CHECK((h > d));
    CHECK((h <=(d*2)));
    CHECK((h >=(d*2)));
    CHECK((h ==(d*2)));
    CHECK((f >= d));

    
    
    						                                                                                                                
}
TEST_CASE("Bad input") {
    CHECK_THROWS((a+d));
    CHECK_THROWS((b+f));
    CHECK_THROWS((b*f));
    CHECK_THROWS((a*d));
    CHECK_THROWS(((a*7)*d));
    CHECK_THROWS((h*d*a));

   

}
