#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Person {
private:
	string name;
	int age;
public:
	Person(string name = "", int age = 0) { this->name = name; this->age = age; }
	string getname() { return name; }
	int getage() { return age; }
};
bool cmpAge(Person a, Person b) { return a.getage() > b.getage(); }
bool cmpName(Person a, Person b) { return a.getname() < b.getname(); }

int main() {
	vector<Person> v;

	v.push_back(Person("John", 33));
	v.push_back(Person("Kevin", 40));
	v.push_back(Person("Snow", 20));
	v.push_back(Person("Danial", 15));

	//나이 오름차순
	sort(v.begin(), v.end(), cmpAge);	//정렬
	for (int i = 0;i < v.size();i++) {	//출력
		cout << v[i].getage() << ", " << v[i].getname() << endl;
	}

	cout << endl;

	//이름 내림차순
	sort(v.begin(), v.end(), cmpName);	//정렬
	for (int i = 0;i < v.size();i++) {	//출력
		cout << v[i].getage() << ", " << v[i].getname() << endl;
	}
}