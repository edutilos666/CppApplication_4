#ifndef PERSON_HPP
#define PERSON_HPP
#include <iostream>
#include <string>
#include "Address.hpp"
#include "Name.hpp"

using namespace std ; 

class Person {
private:
    Address address ; 
    Name name; 
    double wage; 
public:
    Person(Address, Name, double); 
    Person(); 
    void setAddress(Address); 
    void setName(Name); 
    Address getAddress(); 
    Name getName(); 
    void setWage(double); 
    double getWage(); 
};


Person::Person() {
    
}
     Person::Person(Address address, Name name, double wage) {
         this-> address = address ; 
         this-> name = name; 
         this-> wage = wage; 
     } 
    void Person::setAddress(Address address) {
        this-> address = address ; 
    } 
    void Person::setName(Name name) {
        this-> name = name; 
    } 
    Address Person::getAddress() {
        return this-> address ; 
    } 
    Name Person::getName() {
        return this-> name; 
    }
    void Person::setWage(double wage) {
        this-> wage = wage ; 
    } 
    double Person::getWage() {
        return this-> wage ; 
    } 
    
#endif /* PERSON_HPP */

