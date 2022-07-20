#include "DMV.h"

DMV::DMV(std::string filename)
{
        std::ifstream infile;
        infile.open(filename);
        infile >> size;

        grid = new DriversLicenseRecord*[size];

        if(infile.is_open())
        {
                for(int i = 0; i < size; i++)
                {
                        std::string lname;
                        std::string fname;
                        int age;
                        char voter;
                        int license;

                        infile >> lname;
                        infile >> fname;
                        infile >> age;
                        infile >> voter;
                        infile >> license;

                        grid[i] = new DriversLicenseRecord(lname,fname,age,voter,license);
                }
        } else {
                std::cout << "The file couldn't be opened. \n";
        }

        infile.close();
}

DMV::~DMV() {
        delete[] grid;
}

void DMV::run(){
        int choice;
        // print the menu
        do {
                std::cout << "Select an option: " << std::endl;
                std::cout << "1) Print all Drivers Info" << std::endl;
                std::cout << "2) Print all voters" << std::endl;
                std::cout << "3) Print specific driver" << std::endl;
                std::cout << "4) Create registered voter file" << std::endl;
                std::cout << "5) Quit" << std::endl;
                do {
                        std::cout << "Enter your choice: ";
                        std::cin >> choice;
                        if (choice < 0 || choice > 5) {
                                std::cout << "Wrong input!" << std::endl;
                        }
                } while (choice < 0 || choice > 5);

                switch(choice) {
                case 1:
                        option1();
                        break;

                case 2:
                        option2();
                        break;

                case 3:
                        option3();
                        break;

                case 4:
                        option4();
                        break;

                case 5:
                        std::cout << "You've quit the program" << std::endl;
                        return;
                }
        } while (choice != 5);
}

void DMV::option1() {
        for (int i = 0; i < size; i++) {
                std::cout << grid[i]->getlname() << ", " << grid[i]->getfname()
                          << ", (" << grid[i]->getAge() << "): " << grid[i]->getLicense() << std::endl;
        }
        std::cout << std::endl;
}

void DMV::option2() {
        for (int i = 0; i < size; i++) {
                if (grid[i]->getVoter() == 'Y') {
                        std::cout << grid[i]->getlname() << ", " << grid[i]->getfname()
                                  << ", (" << grid[i]->getAge() << "): " << grid[i]->getLicense() << std::endl;
                }
        }
        std::cout << std::endl;
}

void DMV::option3() {
        int license;
        std::cout << "Input desired drivers license: ";
        std::cin >> license;

        for (int i = 0; i < size; i++) {
                if (grid[i]->getLicense() == license) {
                        std::cout << grid[i]->getlname() << ", " << grid[i]->getfname()
                                  << ", (" << grid[i]->getAge() << "): " << grid[i]->getLicense() << std::endl << std::endl;
                        return;
                }
        }

        std::cout << "No record found" << std::endl << std::endl;
}

void DMV::option4() {
        std::ofstream myFile;
        std::string fileName;
        int count = 0;

        std::cout << "Input file name: ";
        std::cin >> fileName;
        myFile.open(fileName);
        for (int i = 0; i < size; i++) {
                if (grid[i]->getVoter() == 'Y') {
                        count++;
                }
        }

        myFile << count << std::endl;
        for (int i = 0; i < size; i++) {
                if (grid[i]->getVoter() == 'Y') {
                        myFile << grid[i]->getlname() << " " << grid[i]->getfname() << " " << grid[i]->getAge() << " " << grid[i]->getVoter() << " " <<
                                grid[i]->getLicense() << std::endl;
                }
        }
}
