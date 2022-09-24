
/*Problem Set 1
bilal_week1_ps.cpp
Ramsha Bilal
PC
*/

#include<iostream>
#include<string>
using namespace std;

void problem1() //code for problem 1
{
	int catAge, noOfJellybeans, maxPeople;
	string footballTeam;
	double gradeAvg;
	bool eatPizza;
	maxPeople = 25;
	catAge = 4;
	gradeAvg = 3.8; 

	footballTeam = "Manchester United";
	noOfJellybeans = 16;
	eatPizza = false;
}

void problem2() //code for problem 2
{
	string firstName, lastName, streetName, streetType, city, state;
	int streetNumber, zip;

	cout << "Enter the following:" << endl;
	cout << "First Name: ";
	cin >> firstName;
	cin.ignore();

	cout << "Last Name: ";
	cin >> lastName;
	cin.ignore();

	cout << "Street Number: ";
	cin >> streetNumber;
	cin.ignore();

	cout << "Street type (e.g road, street, etc.): ";
	cin >> streetType;
	cin.ignore();

	cout << "Street Name: ";
	getline(cin, streetName);

	cout << "Zip Code: ";
	cin >> zip;
	cin.ignore();

	cout << "City: ";
	getline(cin, city);

	cout << "State: ";
	getline(cin, state);

	cout << firstName << " " << lastName << endl;
	cout << streetNumber << " " << streetName << " " << streetType << endl;
	cout << city << " " << state << " " << zip << endl;
}

void problem3() // code for problem 3 
				 /*this code will produce the warning of possible loss of data during double -to- int conversion.
                   I have chosen to ignore it because to limit values to two decimal places, loss of the remaining 
				   decimal places is necessary.*/
{
	int noOfHotdogs, noOfSodas, noOffries;
	double hotdogCost = 3.5, friesCost = 2.50, sodaCost = 1.25;
	double subtotal, total, taxAmount;    
    int subTotalinto100, taxAmountinto100, totalinto100;

	cout << "Welcome to Joe's" << endl
		<< endl
		<< "How many hotdogs? "; 
	cin >> noOfHotdogs;
	cout << "How many fries? ";
	cin >> noOffries;
	cout << "How many sodas? ";
	cin >> noOfSodas;

	subTotalinto100 = (hotdogCost * noOfHotdogs + friesCost * noOffries + sodaCost * noOfSodas)*100; 
	subtotal = ((static_cast<double>(subTotalinto100)/100)); 

	taxAmountinto100 = ((6.25 / 100)*(subTotalinto100));
	taxAmount = ((static_cast<double>(taxAmountinto100)/100));

	totalinto100 = subTotalinto100 + taxAmountinto100;
	total = ((static_cast<double>(totalinto100)/100));


	cout << "Your order :" << endl
		<< noOfHotdogs << " Hotdogs" << endl
		<< noOffries << " Fries" << endl
		<< noOfSodas << " Sodas" << endl << endl
		<< "SubTotal: " << subtotal << endl
		<< "Meals Tax:" << taxAmount << endl
		<< "Total Due: " << total << endl;

}

int main() //using PC
{
	cout << "running problem 1" << endl;
	problem1();

	cout << "running problem 2" << endl;
	problem2(); 

	cout << "running problem 3" << endl;
	problem3();
	return 0;
}