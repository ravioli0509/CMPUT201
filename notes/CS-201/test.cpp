#include <iostream>
#include <wchar.h>

using namespace std;

int main()
{
    string characterName = "Ravi";
    int age;
    age = 35;
    std::cout << "Hello " << characterName << std::endl;
    std::cout << "How are you " << characterName << std::endl;
    std::cout << "Your age is " << age << std::endl;
    
    string characterName1 = "Mike";
    int age1;
    age = 89;
    std::cout << "Hello " << characterName1 << std::endl;
    std::cout << "How are you " << characterName1 << std::endl;
    std::cout << "Your age is " << age1 << std::endl;
    return 0;

}

int datatypes()
{
    char grade = 'A';
    string phrase = "Hello";
    int age = 40;
    float age_decimal = 30.2;
    //more decimal points than float//
    double age_decimal = 23.1;
    bool isMale = true;
    phrase[0] = 'B';
    cout << phrase;

}