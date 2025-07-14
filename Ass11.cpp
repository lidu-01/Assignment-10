#include <iostream>
using namespace std;

class User {
public: 
    virtual void accessLevel() {
        cout << "User: Limited Access" << endl;
    }
};
//Drivered from User
class Employee : public User {
public: 
    void accessLevel() override {
        cout << "Employee: Standard Access" << endl;
    }
};
//Drived from Employee
class InventoryManager : public Employee {
public: 
    void accessLevel() override {
        cout << "Inventory Manager: Full Inventory Access" << endl;
    }
};

int main() {
    InventoryManager manager;
    manager.accessLevel();

    return 0;
}