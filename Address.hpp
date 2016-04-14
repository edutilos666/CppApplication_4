#ifndef ADDRESS_HPP
#define ADDRESS_HPP
#include <iostream>
#include <string>

using namespace std ; 

class Address {
private: 
    string line1 ; 
    string line2; 
public: 
    Address(string,string); 
    Address(); 
    void setLine1(string); 
    string getLine1(); 
    void setLine2(string); 
    string getLine2(); 
};


Address::Address() {
    
}
Address::Address(string line1 ,string line2) {
      this-> line1 = line1 ; 
      this-> line2 = line2 ; 
  }
    void Address::setLine1(string line1) {
        this->line1 = line1 ; 
    } 
    string Address::getLine1() {
        return this-> line1 ; 
    } 
    void Address::setLine2(string line2) {
        this-> line2 = line2 ; 
    } 
    string Address::getLine2() {
        return this-> line2; 
    } 
    

#endif /* ADDRESS_HPP */

