#include <iostream>
#include <string>

int main()
{
    int age {21};
    std::cout << "Age: " << age << std::endl;

    std::cerr << "Error message : Something is wrong" << std::endl;
    std::clog << "Log message : Something happened " << std::endl;
    
    int age1;
    std::string name;
    
    std::cout << "Please type your name and then your name !" << std::endl;
    
    //std::cin >> name >> age1;    
    //std::cout << "Dear " << name << ". You are " << age1 << " years old" << std::endl;
    
    std::string full_name;
    
    std::cout << "Please type in your full name and then age urs" << std::endl;
    
    std::getline(std::cin,full_name);
    std::cin >> age1;
    
    std::cout << "Hi ! " << full_name;
    std::cout << " You are " << age1 << " years old" ;
    
    return 0;
}
