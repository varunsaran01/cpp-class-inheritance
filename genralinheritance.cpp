/* 
PRN - 22070123130
Exp_14
General Inheritence
Part 1
*/
#include<iostream>
using namespace std;
//Base class
class Vehicle
{
    public:
    string brand="Ford_";
    void color()
    {
        cout<<"Red!\n";
    }
};
//Derived class
class Car:public Vehicle
{
    public:
    string model="Mustang";
};
int main()
{
    Car myCar;
    myCar.color();
    cout<<myCar.brand+""+myCar.model;
    return 0;
}
/*Output
Red!
Ford_Mustang
*/
