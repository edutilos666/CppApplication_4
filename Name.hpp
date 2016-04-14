#ifndef NAME_HPP
#define NAME_HPP

#include <iostream>
#include <string>

using namespace std ; 


class Name {
private:
    string first, last; 
public:
    Name(string,string); 
    Name(); 
    void setFirst(string); 
    void setLast(string); 
    string getFirst(); 
    string getLast(); 
};



Name::Name() {
    
}
   
    Name::Name(string first,string last) {
        this-> first = first; 
        this-> last = last ; 
    } 
    void Name::setFirst(string first)  {
        this-> first = first; 
    } 
    void Name::setLast(string last) {
        this-> last = last ; 
    } 
    string Name::getFirst() {
        return this-> first ; 
    }
    string Name::getLast() {
        return this-> last ; 
    }
    
#endif /* NAME_HPP */

