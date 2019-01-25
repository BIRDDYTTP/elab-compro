#include <iostream>
using namespace std;

class Student{
    public:
        Student(string name, string firstName, string id, string gender){
            this->name = name;
            this->firstName = firstName;
            this->id = id;
            this->gender = gender;
        }

        string getName(){
            return this->name;
        }

        string getFirstName(){
            return this->firstName;
        }
        
        string getID(){
            return this->id;
        }

        string getGender(){
            return this->gender;
        }

        void setName(string name){
            this->name = name;
        }

        void setFirstName(string firstName){
            this->firstName = firstName;
        }

        
    private:
        string name;
        string firstName;
        string id;
        string gender;
}