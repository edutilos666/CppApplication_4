/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: edutilos
 *
 * Created on 14 April 2016, 19:37
 */

#include <cstdlib>
#include <iostream>
#include "Person.hpp"
#include <ctime>

using namespace std;


inline void printPerson(Person); 
int main(int argc, char** argv) {
    cout << "Hello world" << endl ; 
    
    Address a1("Bochum", "Sumperkamp"); 
    Name n1("foo", "bar"); 
    
    srand((unsigned)time(NULL)); 
    Person p1; 
    p1.setAddress(a1); 
    p1.setName(n1); 
    p1.setWage((double)rand()); 
    
    
    printPerson(p1); 
    
    
    Person p2(Address("Berlin", "Germany"), Name("edu", "tilos"), (double)rand()); 
    printPerson(p2); 
    return 0;
}



inline void printPerson(Person person) {
    string line1 = person.getAddress().getLine1(), 
            line2 = person.getAddress().getLine2(), 
            first = person.getName().getFirst(), 
            last = person.getName().getLast(); 
    double wage = person.getWage(); 
    
    cout << "line1 = "<< line1 << endl 
            << "line2 = " << line2 << endl 
            << "first = "  << first << endl 
            << "last = " << last << endl 
            << "wage = " << wage << endl ; 
}