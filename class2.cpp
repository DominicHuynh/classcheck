#include<iostream>
#include<string>
using namespace std;
class Car {
    private:
    string name;
    int number;
    double budget;
    int wheel_number;
    public:
    //set obj
    void setName(string na){na=name;}
    void setNumber(int num){number=num;}
    void setBudget(double bud){budget=bud;}
    void setWheel_number(int wheelnum){wheel_number=wheelnum;}

    // get car
    string getName(){return name;}
    int getNumber(){return number;}
    double getBudget(){return budget;}
    int getWheel_number(){return wheel_number;}

    
        

    
};
int main(){
    Car obj;
    obj.setName("dominic huynh");
    obj.setNumber(999999);
    obj.setBudget(100000.00);
    obj.setWheel_number(4);

    cout<<"The books's ID is: "<<obj.getName()<<endl;
     cout<<"The books's author is: "<< obj.getNumber()<<endl;
      cout<<"The books's budget is: "<<obj.getBudget()<<endl;
      cout<<"The books's wheel number is: "<<obj.getWheel_number()<<endl;
return 0;
}