#include <iostream>
using namespace std;

class Vector {
    int *arr;
    int size;

public:
    Vector(int s) {
        size=s;
        arr=new int[size];
    }

    int& operator[](int i) {
        return arr[i];
    }

    int operator()() {
        int sum=0;
        for(int i=0;i<size;i++)
            sum+=arr[i];
        return sum;
    }

    ~Vector() {
        delete[] arr;
    }
};

int main() {

    Vector v(5);

    v[0]=10;
    v[1]=20;
    v[2]=50;
    v[3]=40;
    v[4]=5;

    cout<<"Sum = "<<v()<<endl;
}