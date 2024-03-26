#include<iostream>
#include<string>
#include "Person.h"
using namespace std;

PersonList createPersonList(int n){
    PersonList arr;
    
    arr.people= new Person[n];
    for (int i = 0; i < n; i++){
        arr.people[i].name= "John Doe";
        arr.people[i].age = 1;
    }


    return arr;
}