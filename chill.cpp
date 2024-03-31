#include<iostream>
#include<string>
using namespace std;
class car{
    private:
        string name;
        int id;
        double gpa;
    public:
        void setname(string _name){
            name=_name;
            
        }
        string getName(){
            return name;
        }
        void setid(int _id){
            id=_id;
        }
        int getId(){
            return id;
        }
        void setGpa(double _gpa){
            gpa=_gpa;
        }
        double getGpa(){
            return gpa;
        }

        


};
int main(){
    car obj;
    obj.setname("dominic");
    obj.setid(1895703);
    obj.setGpa(7.0);
    cout<<"The information of the car is: "<<obj.getName()<< " "<<obj.getId()<< " "<<obj.getGpa()<<endl;
    return 0;
}
