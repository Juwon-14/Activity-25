//
//  Customer.h
//  Activity-25
//
//  Created by Juwon Hong on 10/24/24.
//

#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <string>

// This function is the Address structure
struct Address {
    std::string street;
    std::string city;
    std::string zipCode;
};

//Customer structure
struct Customer {
    int id;
    std::string name;
    std::string email;
    Address address;  // Nested Address structure inside Customer
};

// Function declarations
void inputCustomerData(Customer &customer);
void printCustomerData(const Customer &customer);

#endif
