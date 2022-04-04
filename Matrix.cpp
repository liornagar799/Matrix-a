#include <iostream>
#include "Matrix.hpp"
// #include <vector>
// using namespace std;
// using namespace zich;
  
    
        zich::Matrix zich::Matrix::operator+(const Matrix &mat_test){
            std::vector<double> identity = {1, 0, 0, 0, 1, 0, 0, 0, 1};
            Matrix a{identity, 3, 3};
            return a;
        }
        zich::Matrix& zich::Matrix::operator+=(const Matrix &mat_test){
            return *this;
        }
         zich::Matrix zich::Matrix::operator+(){
            std::vector<double> identity = {1, 0, 0, 0, 1, 0, 0, 0, 1};
            Matrix a{identity, 3, 3};
            return a;
        }
         zich::Matrix zich::Matrix::operator-(const Matrix &mat_test){
            std::vector<double> identity = {1, 0, 0, 0, 1, 0, 0, 0, 1};
            Matrix a{identity, 3, 3};
            return a;
        }
        zich::Matrix& zich::Matrix::operator-=(const Matrix &mat_test){
            return *this;
        }
         zich::Matrix zich::Matrix::operator-(){
            std::vector<double> identity = {1, 0, 0, 0, 1, 0, 0, 0, 1};
            Matrix a{identity, 3, 3};
            return a;
        }
        bool zich::Matrix::operator<(const Matrix &mat_test){
            return false;
        }
        bool zich::Matrix::operator>(const Matrix &mat_test){
            return false;
        }
        bool zich::Matrix::operator<=(const Matrix &mat_test){
            return false;
        }
        bool zich::Matrix::operator>=(const Matrix &mat_test){
            return false;
        }
        bool zich::Matrix::operator==(const Matrix &mat_test){
            return false;
        }
        bool zich::Matrix::operator!=(const Matrix &mat_test){
            return false;
        }
        //n++
        zich::Matrix& zich::Matrix::operator++(int){
            return *this;
        }
        zich::Matrix& zich::Matrix::operator--(int){
            return *this;
        }
         // ++n
        zich::Matrix& zich::Matrix::operator++(){
            return *this;
        }
       // Matrix& operator++();
        zich::Matrix& zich::Matrix::operator--(){
            return *this;
        }
        zich::Matrix zich::Matrix::operator*(const Matrix &mat_test){
            std::vector<double> identity = {1, 0, 0, 0, 1, 0, 0, 0, 1};
            Matrix a{identity, 3, 3};
            return a;
        }
        
        //3*A A*3
        zich::Matrix zich::Matrix::operator*(double scalar){
            std::vector<double> identity = {1, 0, 0, 0, 1, 0, 0, 0, 1};
            Matrix a{identity, 3, 3};
            return a;
        }
        zich::Matrix& zich::Matrix::operator*=(const Matrix &mat_test){
            return *this;
        }
        zich::Matrix& zich::Matrix::operator*=(double scalar){
            return *this;
        }

        ostream& zich::operator<<(ostream& os, Matrix const& Mat){
           return os;
        }
        istream& zich::operator>>(istream& is, Matrix& Mat){
            return is;
        }

        zich::Matrix zich::operator*(double scalar, Matrix &mat_test){
            std::vector<double> identity = {1, 0, 0, 0, 1, 0, 0, 0, 1};
            Matrix a{identity, 3, 3};
            return a;
        }
    

