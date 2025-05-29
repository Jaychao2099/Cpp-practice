#include <iostream>
#include <string>

int main() {
    // 宣告變數
    std::string name;
    int age;
    double height;
    
    // 輸入範例
    std::cout << "Enter your name: ";
    std::getline(std::cin, name);
    
    std::cout << "Enter your age: ";
    std::cin >> age;
    
    std::cout << "Enter your height (m): ";
    std::cin >> height;
    
    // 輸出範例
    std::cout << "\n===== Personal Info. =====\n";
    std::cout << "Name: " << name << std::endl;
    std::cout << "Age: " << age << " year old" << std::endl;
    std::cout << "Height: " << height << " m" << std::endl;
    system("pause"); // 暫停程式，等待使用者按任意鍵繼續
    system("cls"); // 清除螢幕
    std::cout << "Thank you for providing your information!" << std::endl;

    return 0;
}