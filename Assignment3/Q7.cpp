#include <iostream>
#include <cstring>
using namespace std;

class String {
    char *str;

public:

    String() {
        str=new char[1];
        str[0]='\0';
    }

    String(const char *s) {
        str=new char[strlen(s)+1];
        strcpy(str,s);
    }

    String(const String &s) {
        str=new char[strlen(s.str)+1];
        strcpy(str,s.str);
    }

    String& operator=(const String &s) {
        if(this!=&s) {
            delete[] str;
            str=new char[strlen(s.str)+1];
            strcpy(str,s.str);
        }
        return *this;
    }

    String operator+(const String &s) {
        String temp;
        delete[] temp.str;

        temp.str=new char[strlen(str)+strlen(s.str)+1];
        strcpy(temp.str,str);
        strcat(temp.str,s.str);

        return temp;
    }

    friend ostream& operator<<(ostream &out,String &s) {
        out<<s.str;
        return out;
    }

    friend istream& operator>>(istream &in,String &s) {
        char temp[100];
        in>>temp;
        s=String(temp);
        return in;
    }

    ~String() {
        delete[] str;
    }
};

int main() {

    String s1,s2;

    cout<<"Enter string1: ";
    cin>>s1;

    cout<<"Enter string2: ";
    cin>>s2;

    String s3 = s1 + s2;

    cout<<"s1: "<<s1<<endl;
    cout<<"s2: "<<s2<<endl;
    cout<<"s3: "<<s3<<endl;
}