/**
* @file main.cpp
* @brief  This is a lecture program that illustrates topic from gaddis chapter 11.
*
* @author Bilbo B. Baggins
* @credits Gaddis Chapter 11
* @assignment Lecture 5.1
* @date 2/8/2020
* 
*/

#include <iostream>
#include "employee.h"

using namespace std;

int main() {
/*
  Employee b;
  b.setFirstName("Bilbo");
  b.setLastName("Baggins");
  b.setSalary(55000.00);
  //this works
  cout << b.getFirstName() << " " << b.getLastName() << endl;
  */

  Employee empDefault;
  cout << empDefault.getFirstName() << " " << empDefault.getLastName() << " " << empDefault.getSalary() << endl;
  /*
  const Employee gandalf("Gandalf","The Grey");
  cout << gandalf.getFirstName() << endl;
  
  cout << "Count of Employees are:" << Employee::getCounter() << endl;
  
  Employee* ptrEmployee = new Employee("Samwise", "Gamgee");
  cout << "Count of Employees are:" << Employee::getCounter() << endl;
  delete ptrEmployee;
  
  cout << endl << "File Ends Here" << endl << endl;
  */
}