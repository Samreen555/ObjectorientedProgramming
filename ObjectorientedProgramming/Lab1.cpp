/*
#include<iostream>
using namespace std;
class dog {
public:
	string name, breed;
	int age;
	void bark()
	{
		cout << name << "says woofs!" << endl;
	}
	void displaydetails()
	{
		cout << "Name: " << name << "\tBreed: " << breed << "\tAge: " << age;
	}
};
int main()
{
	dog dog1;
	dog1.name = "buddy";
	dog1.breed = "husky";
	dog1.age = 20;
	dog1.displaydetails();
	cout << endl;
	system("pause");
	return 0;
}
class house {
public:
	string name;
	int age;
	void addperson()
	{
		cout << "Name: " << name << "\t Age: " << age;
		cout << endl;
		cout << "Person added to the house: "<<endl;
	}
};
int main()
{
	house house1;
	house1.name = "Samreen";
	house1.age =18;
	house1.addperson();
	house house2;
	house2.name = "Tayyaba";
	house2.age = 18;
	house2.addperson();
	house house3;
	house3.name = "Umama";
	house3.age = 18;
	house3.addperson();
	system("pause");
	return 0;

}
class dog {
public:
	string Dogname, breed;
	int age;
	void bark()
	{
		cout << Dogname << "says woofs!" << endl;
	}
};
class person {
public:
	string name, address;
	int age, housenumber;
	void personinformation() 
	{
		cout << "Name: " << name << "\t Age: " << age << endl;
	}
	dog pet;
	void petinformation()
	{
		cout << "Name: " << pet.Dogname << "\tBreed: " << pet.breed << "\tAge: " << pet.age;
	}
};
class house {
public:
	person house;
	void personhouse()
	{
		cout << "Address: " << house.address << "\tHouse Number: " << house.housenumber;
	}
};
int main()
{
	//person1
	person person1;
	house house1;
	person1.name = "Samreen";
	person1.age =18;
	person1.pet.Dogname = "Buddy";
	person1.pet.breed = "Husky";
	person1.pet.age =10;
	house1.house.address = "123 Street";
	house1.house.housenumber =30 ;
	cout << "Person information:\n ";
	person1.personinformation();
	cout << "Pet information:\n ";
	person1.petinformation();
	cout << "\nHouse information:\n";
	house1.personhouse();
	cout << endl;
	cout << "-----------------------------------------------------------------"<<endl;
	//person 2
	person person2;
	house house2;
	person2.name = "Tayyaba";
	person2.age = 19;
	person2.pet.Dogname = "Husky";
	person2.pet.breed = "Husky";
	person2.pet.age =12 ;
	house2.house.address = "145 Street";
	house2.house.housenumber = 31;
	cout << "Person information:\n ";
	person2.personinformation();
	cout << "Pet information:\n ";
	person2.petinformation();
	cout << "\nHouse information:\n";
	house2.personhouse();
	cout << endl;
	cout << "-----------------------------------------------------------------" << endl;
	//person3
	person person3;
	house house3;
	person3.name = "Umama";
	person3.age = 18;
	person3.pet.Dogname = "Nobody";
	person3.pet.breed = "husky";
	person3.pet.age = 15;
	house3.house.address = "234 Street";
	house3.house.housenumber = 32;
	cout << "Person information:\n ";
	person3.personinformation();
	cout << "Pet information:\n ";
	person3.petinformation();
	cout << "\nHouse information:\n";
	house3.personhouse();
	cout << endl;
	cout << "-----------------------------------------------------------------" << endl;
	system("pause");
	return 0;
}
class person {
public:
	string name, dog;
	void introduce()
	{
		cout << name << " owns a dog named " << dog << endl;
	}
	void setDog()
	{
		string newDog;
		dog = newDog;
	}
};
int main()
{
	person person1;
	cout << "Before changing the dog:\n";
	person1.name = "Alex";
	person1.dog = "Buddy";
	person1.introduce();
	// after changing the dog
	cout << "\nAfter changing the dog: \n";
	person1.dog = "Max";
	person1.introduce();
	cout << endl;
	system("pause");
	return 0;
}
#include <iostream>
#include <string>
using namespace std;

const int maxHouses = 4;
const int maxResidents = 2;

class House {
private:
	string address, residents[maxResidents];
	int numResidents;

public:
	House(const string& address) : address(address), numResidents(0) {}

	void addResident(const string& resident) {
		if (numResidents < maxResidents) {
			residents[numResidents++] = resident;
		}
		else {
			cout << "House is at full capacity!\n";
		}
	}

	void displayinformation() const {
		cout << "House at address: " << address << endl;
		cout << "Residents: ";
		for (int i = 0; i < numResidents; ++i) {
			cout << residents[i] << ", ";
		}
		cout << endl;
	}
};

class Neighborhood {
private:
	House houses[maxHouses];
	int numHouses;

public:
	Neighborhood() : numHouses(0) {}

	void addHouse(const string& address) {
		if (numHouses < maxHouses) {
			houses[numHouses++] = House(address);
		}
		else {
			cout << "Neighborhood is at full capacity!\n";
		}
	}

	void addResidentTohouse(int houseIndex, const string& resident) {
		if (houseIndex >= 0 && houseIndex < numHouses) {
			houses[houseIndex].addResident(resident);
		}
		else {
			cout << "Invalid house index: " << houseIndex << endl;
		}
	}

	void displayAllhousesInfo() const {
		cout << "Neighborhood information:\n";
		for (int i = 0; i < numHouses; ++i) {
			houses[i].displayinformation();
		}
	}
};

int main() {
	Neighborhood obj;
	obj.addHouse("123 Main st");
	obj.addHouse("456 Elm st");
	obj.addResidentTohouse(0, "John");
	obj.addResidentTohouse(1, "Alice");
	obj.displayAllhousesInfo();
	cin.get(); // Pause before closing the console window
	return 0;
}
#include <iostream>
#include <string>
#include <vector>
using namespace std;
// class of house
class House {
private:
	string address;
	vector<string> residents;
public:
	House(const string& address) : address(address) {}

	void addResident(const string& resident) {
		residents.push_back(resident);
	}

	void displayInfo() const {
		cout << "House at address: " << address << endl;
		cout << "Residents: ";
		for (const auto& resident : residents) {
			cout << resident << ", ";
		}
		cout << endl;
	}
};
// class neighbor 
class Neighborhood {
private:
	vector<House> houses;

public:
	void addHouse(const string& address) {
		houses.emplace_back(address);
	}

	void addResidentToHouse(int houseIndex, const string& resident) {
		if (houseIndex >= 0 && houseIndex < houses.size()) {
			houses[houseIndex].addResident(resident);
		}
		else {
			cout << "Invalid house index!" <<endl;
		}
	}
	void displayAllHousesInfo() const {
		cout << "Neighborhood Information:" <<endl;
		for (const auto& house : houses) {
			house.displayInfo();
		}
	}
};
int main() {
	Neighborhood neighborhood;
	neighborhood.addHouse("123 Main St");
	neighborhood.addHouse("456 Elm St");
	neighborhood.addResidentToHouse(0, "SAMREEN");
	neighborhood.addResidentToHouse(0, "ZAIN");
	neighborhood.addResidentToHouse(1, "REHAN");

	neighborhood.displayAllHousesInfo();
	system("pause");
	return 0;
}
*/
#include<iostream>
using namespace std;
class vehicle {
private:
	string model,make;
	int year;
public:
	vehicle(string make, string model, int year) : make(make), model(model), year(year)
	{

	}
	void setMake(string make)
	{
		make = make;
	}
	void setmodel(string model)
	{
		model = model;
	}
	void setyear(int year)
	{
		year = year;
	}
	void dispalyVehicleinformation()
	{
		cout << "Make: " << make << "\t Model: " << model << "\t Year: " << year << endl;
	}
	void serviceCar(int miles)
	{
		cout << "Miles are: " << miles<<endl;
		if (miles >= 10000)
			cout << "Car needs service:";
		else
			cout << "Car is ok:";
	}
};
int main()
{
	vehicle myVehicle("Toyata", "Corolla", 2020);
	myVehicle.dispalyVehicleinformation();
	myVehicle.serviceCar(234);
	cout << endl;
	system("pause");
	return 0;
}