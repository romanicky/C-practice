#include <iostream>
using namespace std;

class Employee
{
protected:
    int id;
    string name;
    string role;

public:
    Employee()
    {
        id = 0;
        name = "Default Employee";
        role = "Employee";
    }

    Employee(int empId, const string &empName, const string &empRole)
    {
        id = empId;
        name = empName;
        role = empRole;
    }

    void displayDetails()
    {
        cout << "ID: " << id << ", Name: " << name << ", Role: " << role << endl;
    }
};

class Manager : public Employee
{
protected:
    string department;

public:
    Manager()
    {
        id = 0;
        name = "Default Manager";
        role = "Manager";
        department = "HR";
    }

    Manager(int mngId, const string &mngName, const string &mngRole = "Manager", const string &mngDept = "HR")
        : Employee(mngId, mngName, mngRole), department(mngDept)
    {
    }

    void displayDetails()
    {
        cout << "ID: " << id << ", Name: " << name << ", Role: " << role << ", Department: " << department << endl;
    }
};

class Director : public Manager
{
private:
    int reportees; // The number of employees reporting to the director

public:
    Director(int drId, const string &drName, const string &drRole, const string &drDept = "Management", int numberReportees = 0)
        : Manager(drId, drName, drRole, drDept), reportees(numberReportees)
    {
    }

    void displayDetails()
    {
        cout << "ID: " << id << ", Name: " << name << ", Role: " << role << ", Department: " << department << endl
             << "Number of Reportees: " << reportees << endl;
    }
};

int main()
{
    int managerId;
    string managerName, managerRole, managerDepartment;

    cout << "Input manager id: ";
    cin >> managerId;

    cout << "Input manager name: ";
    cin >> managerName;

    Manager m = Manager(managerId, managerName, "Manager", "Sales");

    int directorId, numberReportees;
    string directorName, directorRole;

    cout << "Input director id: ";
    cin >> directorId;

    cout << "Input director name: ";
    cin >> directorName;

    cout << "Input number of reportees: ";
    cin >> numberReportees;

    Director d = Director(directorId, directorName, "Director", "Management", numberReportees);
    m.displayDetails();
    d.displayDetails();
}