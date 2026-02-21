#include<iostream>
#include<string>
using namespace std;
class Teacher{
    private:
        double salary;
    public:
        string name;
        int age;

    // Constructor
    Teacher(string name, int age, double salary) {
        this->name = name;
        this->age = age;
        this->salary = salary;
    }

    // Getter methods
    string getName() {
        return name;
    }

    int getAge() {
        return age;
    }

    double getSalary() {
        return salary;
    }
};
int main()
{
    Teacher t1("Karnav", 18, 5000);
    
    return 0;
}
