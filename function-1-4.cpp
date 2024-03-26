#include<iostream>
#include "Person.h"
PersonList shallowCopyPersonList(PersonList pl){
 PersonList npl;
    npl.numPeople=pl.numPeople;
    
    npl.people=pl.people;

    return npl;

}