#include <iostream>
#include <string>
using namespace std;

class Human 
{
    public:
    
       //имя
       void set_first_name(string human_first_name)
        {
            first_name = human_first_name;
        }
        
        string get_first_name()
        {
            return first_name;
        }
        
        //фамилия
        void set_last_name(string human_last_name)
        {
            last_name = human_last_name;
        }
        
        string get_last_name()
        {
            return last_name;
        }
        
        //возраст
        int set_age(string human_age)
        {
            age = human_age;
        }
        
        int get_age()
        {
            return age;
        }
        
        //рост
        int set_height(string human_height)
        {
            height = human_height;
        }
        
        int get_height()
        {
            return height;
        }
        
    private:
    int age;
    int height;
    string first_name; 
    string last_name;
    
   
};
