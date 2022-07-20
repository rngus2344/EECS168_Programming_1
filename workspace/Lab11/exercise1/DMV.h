#ifndef DMV_H
#define DMV_H
#include "DriversLicenseRecord.h"

class DMV
{
private:
  DriversLicenseRecord* m_dlr;
  int m_size;
  int m_selection;
  std::string m_fileName;

public:
  DMV(std::string fileName);
  ~DMV();
  void run();
  void printAllDriverInfo();
};
#endif
