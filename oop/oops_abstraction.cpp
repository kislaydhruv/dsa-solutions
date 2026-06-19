#include<bits/stdc++.h>
using namespace std;
//method is abstract classes
class Animal{
    public:
    virtual ~Animal() = default;
    // this class contains the virtual method that's why it needs to have vrtual destructor 
    
    //it's pure virtual 
    virtual void sound () = 0;
    //it must be inherited y the subclass for abstraction to happen
    virtual void eat() = 0;




};

class Dog : public Animal{
    public:
    // we are overriding the method of the super class
    void sound() override{
        cout<<"A dog barks"<<endl;
    }
    // now we are doing the interface method by defining it 
    void eat() override {
        cout<<"The dog eat bones"<<endl;

    }

};
class Cat : public Animal {
    public:

    void sound() override{
        cout<<"A cat meow"<<endl;

    }
    // we must write a method to override eat as well otherwise the compiler consider Cat as an abstract class and we cannot call abstract class directly 
    void eat() override{
        cout<<"the cat drinks milk"<<endl;
        
    }

};



int main(){
    Animal* myAnimal = new Dog;
    Animal* yourAnimal = new Cat;

    myAnimal ->sound();
    myAnimal->eat();

    yourAnimal->eat();
    yourAnimal->sound();

    delete myAnimal;
    delete yourAnimal;

    return 0;




}

