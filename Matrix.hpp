#include <string>
// #include <iostream>
// #include <fstream>
// #include <sstream>
// #include <stdexcept>
#include <vector>
using namespace std;


namespace zich{
    class Matrix{   
    private:
        std::vector<double> mat;
        int rows;
        int column;
     
    public:
        Matrix(){};
        Matrix(std::vector<double> mat11, int rows, int column){};
        ~Matrix(){};
        Matrix operator+(const Matrix &mat_test);
        Matrix& operator+=(const Matrix &mat_test);
        Matrix operator+();
        Matrix operator-(const Matrix &mat_test);
        Matrix& operator-=(const Matrix &mat_test);
        Matrix operator-();
        bool operator<(const Matrix &mat_test);
        bool operator>(const Matrix &mat_test);
        bool operator<=(const Matrix &mat_test);
        bool operator>=(const Matrix &mat_test);
        bool operator==(const Matrix &mat_test);
        bool operator!=(const Matrix &mat_test);
        //n++
        Matrix& operator++(int);
        Matrix& operator--(int);
         // ++n
        Matrix& operator++();
        Matrix& operator--();
        Matrix  operator*(const Matrix &mat_test);
        friend Matrix operator*(double scalar, Matrix &mat_test);
        //3*A A*3
        Matrix operator*(double scalar);
        Matrix& operator*=(const Matrix &mat_test);
        Matrix& operator*=(double scalar);
        friend ostream& operator<<(ostream& os, Matrix const& Mat);
        friend istream& operator>>(istream& is, Matrix& Mat);
    

    };

        
}
