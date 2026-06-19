#include<bits/stdc++.h>
using namespace std;

class animal{
    public:
    virtual ~animal() = default ;

    string name ;
    virtual void makeSound() = 0;


};
class Dog : public animal{
    void makeSound() override {
        cout<< "the Dog "<<name <<" says: woof "<<endl;

    }



};
class Cat : public animal{
    void makeSound() override
{
    cout<<" The cat "<<name <<" says: meow "<<endl;

}
};

int main(){
    animal* dog = new Dog;
    animal* cat = new Cat;

    dog->name="Buddy";
    dog->makeSound();
    
    cat->name="Whiskers";
    cat->makeSound();

    delete dog;
    delete cat;

    
}


