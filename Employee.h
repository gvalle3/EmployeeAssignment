/*
 * Employee.h
 *
 *  Created on: Nov 16, 2018
 *      Author: volcano
 */

#ifndef EMPLOYEE_H
#define EMPLOYEE_H

class Employee { //base class
private:
	int employeeNumber;
	string name;
	string address;
public:
	Employee(){
		cout << "Employee default constructor\n";
	}
	Employee(int eNum){
		employeeNumber = eNum;
	}
	~Employee(){
		cout << "Employee deleted\n";
	}
};

class HourlyEmployee : public Employee {
private:
	int hours;
public:
	HourlyEmployee(){
		cout << "Hourly Employee created\n";
	}
	HourlyEmployee(int eNum, int h) : Employee(eNum) {
		hours = h;
	}
	~HourlyEmployee(){
		cout << "Employee deleted\n";
	}
};

class SalariedEmployee : public Employee {
private:
	float salary;
public:
	SalariedEmployee() {
		cout << "Salaried Employee created\n";
	}
	SalariedEmployee(int eNum, float s): Employee(eNum){
		salary = s;
	}
	~SalariedEmployee(){
		cout << "Salaried Employee deleted\n";
	}
};

#endif /* EMPLOYEE_H_ */
