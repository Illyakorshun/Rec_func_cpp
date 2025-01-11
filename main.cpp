#include <iostream>
using namespace std;

struct Address {
    string city;
    string street;
    int house;

    Address(string c, string s, int h) : city(c), street(s), house(h) {
        cout << "constructor Address: " << city << ", " << street << " " << house << endl;
    }
};

struct Person {
    string name;
    int age;
    Address address;  

    Person() : name("Illya"), age(14), address("Vinnitsa", "Independence Ave", 14) {
        cout << "The Person constructor  no parameters" << endl;
    }

    void Info() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Address: " << address.city << ", " << address.street << " " << address.house << endl;
    }
};

int main() {
    Person person;
    person.Info();

    return 0;
}
