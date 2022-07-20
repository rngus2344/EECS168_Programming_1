#include "DriversLicenseRecord.h"
#include "DMV.h"

int main(int argc, char** argv)
{
        //if(argc<2)
        //{
        //  std::cout << "Not enough command line arguments. Exiting...\n";
        //  return(0);
        //}
        //Do a check to make sure we have the right number of arguments, exit if

        std::string fileName="input.txt";
        DMV myDMV(fileName);
        myDMV.run();

        return(0);
}
