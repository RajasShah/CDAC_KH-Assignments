#include <iostream>
using namespace std;

class Matrix {
    int rows, cols;
    int **mat;

public:
    Matrix(int r=2,int c=2) {
        rows=r;
        cols=c;

        mat = new int*[rows];
        for(int i=0;i<rows;i++)
            mat[i] = new int[cols];
    }

    friend istream& operator>>(istream &in, Matrix &m) {
        for(int i=0;i<m.rows;i++)
            for(int j=0;j<m.cols;j++)
                in>>m.mat[i][j];
        return in;
    }

    friend ostream& operator<<(ostream &out, Matrix &m) {
        for(int i=0;i<m.rows;i++){
            for(int j=0;j<m.cols;j++)
                out<<m.mat[i][j]<<" ";
            out<<endl;
        }
        return out;
    }

    Matrix operator+(Matrix &m) {
        Matrix temp(rows,cols);

        for(int i=0;i<rows;i++)
            for(int j=0;j<cols;j++)
                temp.mat[i][j] = mat[i][j] + m.mat[i][j];

        return temp;
    }

    bool operator==(Matrix &m) {
        for(int i=0;i<rows;i++)
            for(int j=0;j<cols;j++)
                if(mat[i][j]!=m.mat[i][j])
                    return false;
        return true;
    }

    ~Matrix() {
        for(int i=0;i<rows;i++)
            delete[] mat[i];
        delete[] mat;
    }
};

int main() {

    Matrix m1(2,2), m2(2,2), m3;

    cout<<"Enter matrix 1\n";
    cin>>m1;

    cout<<"Enter matrix 2\n";
    cin>>m2;

    m3 = m1 + m2;

    cout<<"Addition result\n";
    cout<<m3;

    if(m1==m2)
        cout<<"Matrices equal\n";
    else
        cout<<"Matrices not equal\n";
}