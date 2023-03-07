#include <iostream>
#include <string>
#include "Human.h"
using namespace std;

int main ()
{
  Human human1, human2;

    string first_name;
    string last_name;

    // Ввод имени 
    cout << "Name: ";
    getline(cin, first_name);

    // Ввод фамилии
    cout << "Last name: ";
    getline(cin, last_name);

    // Сохранение имени и фамилии в объект класса Human
    human.set_first_name(first_name);
    human.set_last_name(last_name);
    
    int age;
    int height;
    
    // Ввод возраста 
    cout << "Age: ";
    getline(cin, age);

    // Ввод роста
    cout << "Height: ";
    getline(cin, height);

    // Сохранение возраста  и роста в объект класса Human
    human.set_age(age);
    human.set_height(last_height);
    
    
    cout << "Data: " << human.get_first_name() << " "
         << human.get_last_name() << ", age: "
         << human.get_age() << ", height:"<< human.get_height() <<
         <<endl;


  return 0;
}
