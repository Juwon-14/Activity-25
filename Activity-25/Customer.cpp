//
//  Customer.cpp
//  Activity-25
//
//  Created by Juwon Hong on 10/24/24.
//

#include <iostream>
#include "Customer.h"

using namespace std;

// Function to input customer data
void inputCustomerData(Customer &customer) {
    cout << "Enter customer ID: ";
    cin >> customer.id;
    cin.ignore();

    cout << "Enter customer name: ";
    getline(cin, customer.name);
    
    cout << "Enter customer email: ";
    getline(cin, customer.email);

    //Address structure
    cout << "Enter street address: ";
    getline(cin, customer.address.street);

    cout << "Enter city: ";
    getline(cin, customer.address.city);

    cout << "Enter zip code: ";
    getline(cin, customer.address.zipCode);
}

// Function to print customer data
void printCustomerData(const Customer &customer) {
    cout << "\nCustomer Information:\n";
    cout << "ID: " << customer.id << "\n";
    cout << "Name: " << customer.name << "\n";
    cout << "Email: " << customer.email << "\n";

    // Output for nested Address structure
    cout << "Address:\n";
    cout << "Street: " << customer.address.street << "\n";
    cout << "City: " << customer.address.city << "\n";
    cout << "Zip Code: " << customer.address.zipCode << "\n";
}
