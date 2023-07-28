#include <iostream>
#include <fstream>

int main(int argc, char* argv[]) {
    std::ofstream fout;
    fout.open("output", std::ios::binary);

    int roll;
    std::string name;
    char ch;

    do {
        std::cout << "Enter Roll and Name: ";
        std::cin >> roll >> name;

        // Writing roll as binary
        fout.write(reinterpret_cast<const char*>(&roll), sizeof(roll));

        // Writing name as binary
        int nameLength = name.length();
        fout.write(reinterpret_cast<const char*>(&nameLength), sizeof(nameLength));
        fout.write(name.c_str(), nameLength);

        std::cout << "Wanna input more student data? ";
        std::cin >> ch;

    } while (ch == 'y');

    fout.close();
    return 0;
}
