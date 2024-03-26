#include "Person.h"
#include <iostream>

PersonList createPersonList(int n){
    PersonList arr;
    arr.numPeople=n;
    arr.people= new Person[n];
    for (int i = 0; i < n; i++){
        arr.people[i].name= "John Doe";
        arr.people[i].age = 1;
    }
    return arr;
}
extern PersonList shallowCopyPersonList(PersonList pl);
int main(){
PersonList pl=createPersonList(5);
   PersonList npl=shallowCopyPersonList(pl);
    for (int i = 0; i < 5; i++)
    {
        std::cout << i <<" "<< npl.people[i].name<<" "<<npl.people[i].age<<endl; 
    }
    delete [] npl.people;    


    return 0;
}