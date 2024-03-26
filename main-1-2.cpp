
#include "Person.h"
#include <iostream>
extern PersonList createPersonList(int n); 
int main(){
    PersonList arr = createPersonList(5);
    for (int i = 0; i < 5; i++)
    {
        std::cout << i << " " << arr.numPeople <<" "<< arr.people[i].name<<" "<<arr.people[i].age<<endl; 
    }
    delete [] arr.people;
    return 0;
    
}