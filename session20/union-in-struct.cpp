#include <iostream>
#include <cstring>
using namespace std;

union ContactInfo
{
    char email[50];
    char phone[15];
    char address[100];
};

struct Person
{
    char name[50];
    int contactType; // 1 for email, 2 for phone, 3 for address
    ContactInfo contact;
};

int main()
{
    Person p;
    cout << "Enter name: ";
    cin >> p.name;
    cout << "Select contact type (1: Email, 2: Phone, 3: Address): ";
    int choice;
    cin >> choice;
    p.contactType = choice;

    if (choice == 1)
    {
        cout << "Enter email: ";
        cin >> p.contact.email;
    }
    else if (choice == 2)
    {
        cout << "Enter phone: ";
        cin >> p.contact.phone;
    }
    else if (choice == 3)
    {
        cout << "Enter address: ";
        cin >> p.contact.address;
    }
    else
    {
        cout << "Invalid choice!" << endl;
    }

    cout << "\n--- Person Details ---" << endl;
    cout << "Name: " << p.name << endl;
    if (p.contactType == 1)
    {
        cout << "Email: " << p.contact.email << endl;
    }
    else if (p.contactType == 2)
    {
        cout << "Phone: " << p.contact.phone << endl;
    }
    else if (p.contactType == 3)
    {
        cout << "Address: " << p.contact.address << endl;
    }

    return 0;
}