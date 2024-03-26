#include<iostream>
#include "Person.h"
using namespace std;
PersonList deepCopyPersonList(PersonList pl){
    PersonList npl;
    npl.numPeople=pl.numPeople;
    
    npl.people= new Person [npl.numPeople];
    for (int i=0;i<npl.numPeople;i++){
        npl.people[i].name=pl.people[i].name ;
        npl.people[i].age = pl.people[i].age;
    }






    return npl;
}