#include<iostream>
#include<string>
using namespace std;
class Book {
    public:
    int ID;
    string author;
    string name;
};
int main(){
    Book obj;
    obj.ID= 123456789;
    obj.author= "Dominic Huynh";
    obj.name="Facts about shit";

    cout<<"The books's ID is: "<<obj.ID<<endl;
     cout<<"The books's author is: "<<obj.author<<endl;
      cout<<"The books's name is: "<<obj.name<<endl;



    return 0;
}