//------------------------------
//  DO NOT MODIFY NEXT LINE
//------------------------------
#include "catch.hpp"
//------------------------------

// Write the assignment code here
#include<iostream>
using namespace std;

class Real {
public:
double realNum;
Real(double r=0)  {
realNum = r ;
}
Real operator * (double d) {
Real r3;
r3.realNum = realNum + d;
return r3;
}
double GetReal() {
return realNum;
}
};
class Complex:public Real{
public:
double imag; 
Complex (double r=0,double i=0){
realNum=r; imag=i;
}
Complex operator * (double d) {
Complex c3;
c3.realNum = realNum + d;
c3.imag = imag + d;
return c3; }
double GetImaginary() {
return imag;
}
};
class Surreal:public Complex{
public:
double surrealNum;
Surreal (double r=0,double i=0,double s=0){
realNum=r; imag=i; surrealNum=s; }
Surreal operator * (double d) {
multiplication operation
Surreal s3;
s3.realNum = realNum + d;
s3.imag = imag + d;
s3.surrealNum = surrealNum + d;
return s3; 
}
double GetSurreal() {
return surrealNum;
}
};
int main()
{
double value = 5;
cout<<"We are going to add 5 as real number:"<<endl;
cout<<endl;
Real r1(10);
cout<<"Value from Object of class Real :"<<r1.GetReal()<<endl;
Real r2 = r1 * value; // An example call to "operator*"
cout<<"Value from Object of class Real After addition:"<<r2.GetReal()<<endl;
cout<<endl;
Complex c1(10,4);
cout<<"real value from class Complex:"<<c1.GetReal()<<endl;
cout<<"imaginary value from class Complex:"<<c1.GetImaginary()<<endl;
Complex c2 = c1 * value; // An example call to "operator*"
cout<<"real value from class Complex After addition:"<<c2.GetReal()<<endl;
cout<<"imaginary value from class Complex After addition:"<<c2.GetImaginary()<<endl;
cout<<endl;
Surreal s1(10,4,2);
cout<<"real value from class Surreal:"<<s1.GetReal()<<endl;
cout<<"imaginary value from class Surreal:"<<s1.GetImaginary()<<endl;
cout<<"surreal value from class Surreal:"<<s1.GetSurreal()<<endl;
Surreal s2 = s1 * value;
cout<<"real value from class Surreal After addition:"<<s2.GetReal()<<endl;
cout<<"imaginary value from class Surreal After addition:"<<s2.GetImaginary()<<endl;
cout<<"surreal value from class Surreal After addition:"<<s2.GetSurreal()<<endl;
}

#include<iostream>
using namespace std;

class Real {
public:
double realNum;
Real(double r=0)  {
realNum = r ;
}
Real operator * (Real &obj) {
Real r3;
r3.realNum = realNum + obj.realNum ;
return r3;}
double GetReal() {
return realNum;
}
};
class Complex:public Real{
public:
double imag;
Complex (double r=0,double i=0){
realNum=r; imag=i;}
Complex operator * (Complex &obj) {
Complex c3;
c3.realNum = realNum + obj.realNum;
c3.imag = imag + obj.realNum;
return c3; }
double GetImaginary() {
return imag;
}
};
class Surreal:public Complex{
public:
double surrealNum;
Surreal (double r=0,double i=0,double s=0){
realNum=r; imag=i; surrealNum=s;
}
Surreal operator * (Surreal &obj) {
Surreal s3;
s3.realNum = realNum + obj.realNum;
s3.imag = imag + obj.realNum;
s3.surrealNum = surrealNum + obj.realNum;
return s3; }
double GetSurreal() {
return surrealNum;
}
};
int main()
{
Real r1(10);
cout<<"Value from Object of class Real :"<<r1.GetReal()<<endl;
Real r2 = r1*r1; // An example call to "operator*"
cout<<"Value from Object of class Real After addition:"<<r2.GetReal()<<endl;
cout<<endl;
Complex c1(10,4);
cout<<"real value from class Complex:"<<c1.GetReal()<<endl;
cout<<"imaginary value from class Complex:"<<c1.GetImaginary()<<endl;
Complex c2 = c1*c1; // An example call to "operator*"
cout<<"real value from class Complex After addition:"<<c2.GetReal()<<endl;
cout<<"imaginary value from class Complex After addition:"<<c2.GetImaginary()<<endl;
cout<<endl;
Surreal s1(10,4,2);
cout<<"real value from class Surreal:"<<s1.GetReal()<<endl;
cout<<"imaginary value from class Surreal:"<<s1.GetImaginary()<<endl;
cout<<"surreal value from class Surreal:"<<s1.GetSurreal()<<endl;
Surreal s2 = s1*s1; // An example call to "operator*"
cout<<"real value from class Surreal After addition:"<<s2.GetReal()<<endl;
cout<<"imaginary value from class Surreal After addition:"<<s2.GetImaginary()<<endl;
cout<<"surreal value from class Surreal After addition:"<<s2.GetSurreal()<<endl;
}

//------------------------------
//   DO NOT MODIFY TEST CASES
//------------------------------
TEST_CASE( "Assignment" ) {
    SECTION( "c1" ) {
        Real n{10.0};
        REQUIRE( n.GetReal() == 10.0 );
    }
    SECTION( "c2" ) {
        Complex n{10.0, 20.0};
        REQUIRE( n.GetReal() == 10.0 );
        REQUIRE( n.GetImaginary() == 20.0 );
    }
    SECTION( "c3" ) {
        Surreal n{10.0, 20.0, 30.0};
        REQUIRE( n.GetReal() == 10.0 );
        REQUIRE( n.GetImaginary() == 20.0 );
        REQUIRE( n.GetSurreal() == 30.0 );
    }
    SECTION( "a1" ) {
        Real n{10.0};
        Real r = n * 2.0;
        REQUIRE( r.GetReal() == 20.0 );
    }
    SECTION( "a2" ) {
        Complex n{10.0, 20.0};
        Complex r = n * 2.0;
        REQUIRE( r.GetReal() == 20.0 );
        REQUIRE( r.GetImaginary() == 40.0 );
    }
    SECTION( "a3" ) {
        Surreal n{10.0, 20.0, 30.0};
        Surreal r = n * 2.0;
        REQUIRE( r.GetReal() == 20.0 );
        REQUIRE( r.GetImaginary() == 40.0 );
        REQUIRE( r.GetSurreal() == 60.0 );
    }
}
//------------------------------
