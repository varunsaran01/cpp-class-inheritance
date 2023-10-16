/*  
Exp_14
PRN - 22070123130
Part 3
Multiple Inheritence
*/
#include<iostream>
using namespace std;
class mammal
{
    public:
mammal(){
    cout<<"mammal is a animal"<<endl;
}

};
class wingedanimal{
    public:
    wingedanimal()
    {
        cout<<"winged animal can flap";
    }
};
class bat: public mammal,public wingedanimal{};
int main()
{
    bat b1;
    return 0;
}
/*
Output
mammal is a animal
winged animal can flap
*/
