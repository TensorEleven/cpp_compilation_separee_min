#include <string>


class Person{
    private:
    string name;

    public:
    Person (){}
    Person (string newName){name=newName;};
    
    string getName (){return name;}
    void setName (string newName){name = newName;}
    void salute();
};
