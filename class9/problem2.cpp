/*
Problem: Bank Management System

You are tasked with creating a Bank Management System using C++. The system should manage Customers, Accounts, and Transactions. The goal is to practice all C++ OOP concepts.

Requirements

Base Class: Person

Attributes:

name (string)

age (int)

Methods:

virtual void displayInfo() → Displays person’s basic info.

Constructor & Destructor

Use getters and setters for encapsulation.

Derived Class: Customer (inherits from Person)

Attributes:

customerID (int)

accounts (vector of Account*)

Methods:

void addAccount(Account* a)

Override displayInfo() to show customer-specific info.

Abstract Class: Account

Attributes:

accountNumber (int)

balance (double)

Methods:

Pure virtual function void displayBalance()

virtual void deposit(double amount) → Adds money to balance

virtual void withdraw(double amount) → Subtracts money if sufficient balance

Constructor & Destructor

Derived Classes from Account

SavingsAccount

Additional attribute: interestRate (double)

Override displayBalance() to show balance + interest

CheckingAccount

Additional attribute: overdraftLimit (double)

Override withdraw() to allow overdraft up to limit

Class: Transaction

Attributes:

transactionID (int)

amount (double)

transactionType (string: "Deposit" or "Withdrawal")

Methods:

Friend function void printTransaction(Transaction &t) to display transaction details

Polymorphism

Use function overriding in displayBalance() and displayInfo()

Use function overloading for deposit() and withdraw() to allow:

deposit(double amount)

deposit(double amount, string note)

Operator Overloading

Overload + operator to sum balances of two accounts.

Static Members

Keep track of totalAccounts created using a static member in Account.

Extra

Use constructor initialization lists where appropriate.

Create a Printable interface with a pure virtual print() implemented by Customer and Account.

Expected Features

Create multiple customers with multiple accounts.

Deposit and withdraw money.

Track transactions using friend functions.

Use operator overloading to sum account balances.

Display info using polymorphism.

Display total accounts using static member.

This problem covers all the OOP concepts:

Concept	Usage in Problem
Classes & Objects	Person, Customer, Account, Transaction
Encapsulation	Private attributes with getters/setters
Inheritance	Customer inherits Person, SavingsAccount & CheckingAccount inherit Account
Polymorphism	Function overriding and overloading
Abstraction	Account abstract class, Printable interface
Constructor/Destructor	Initialize attributes, clean up memory
Static members	totalAccounts in Account
Operator Overloading	+ for summing account balances
Friend function	printTransaction
*/