#include <iostream>

using namespace std;

class User
{
public:
    string name;                                         //object of a class User has three parameters:
    string surname;                                      //name, surname and age.
    int age;

    int allowed(string Name,string Surname,int Age)
    {
        name = Name;
        surname = Surname;
        age = Age;
        cout << name;                                    // allowed is an object function which takes parameters
        cout << " ";                                     // of an object user1 and first prints the name and surname
        cout << surname;

        if(age >= 18)                                    // after that it checks if user1 is older than 18
        {
            return 1;                                    // returns 1 if user1 is older than 18
        }
        else
        {
            return 0;                                    // returns 0 if user1 is younger than 18
        }
    }
};


int main()
{
    User user1;
    int x;
    cout << "Enter your name: " << endl;                      // program asks user to enter his name, surname and age
    cin >> user1.name;                                        // that are parameters of the object user1
    cout << "Enter your surname: " << endl;
    cin >> user1.surname;
    cout << "Enter your age: " << endl;
    cin >> user1.age;

    x = user1.allowed(user1.name,user1.surname,user1.age);    // x is return value from function allowed
    if(x == 1)
    {
        cout << ", you are allowed to buy alcohol.";          // if x is 1, user is allowed to buy alcohol
    }
    else
    {
        cout << ", you are not allowed to buy alcohol.";      // if x is 0, user is not allowed to buy alcohol
    }

    return 0;
}
